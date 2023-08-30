#include "widget.h"
#include "ui_widget.h"
#include<QString>
#include<QDataStream>
#include<QMessageBox>
#include<QDateTime>
#include<QDebug>
#include<QColorDialog>
#include<QFileDialog>
#include<QTextStream>
#include<QUdpSocket>
Widget::Widget(QWidget *parent,QString name)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    myname=name;

    this->port=9999;//初始化端口
    this->udpSocket=new QUdpSocket(this);//new 套接字

    udpSocket->bind(port,QUdpSocket::ShareAddress |QUdpSocket::ReuseAddressHint);

    //连接udp读取信息信号和，接收信息的槽函数
    connect(udpSocket,&QUdpSocket::readyRead,this,&Widget::ReceiveMessage);
    //连接点击发送按钮和发送的普通信息
    connect(ui->sendBtn,&QPushButton::clicked,[=](){
        sndMsg(Msg);
    });

    //新用户进入
    sndMsg(UserEnter);
    //连接用户退出按钮和关闭事件的槽函数
    connect(ui->exitBtn,&QPushButton::clicked,[=](){
        this->close();
    });
    //字体类型设置
    //connect(ui->fontCbx,&QFontComboBox::currentFontChanged,this,&Widget::on_fontCbx_currentFontChanged);
    connect(ui->fontCbx,&QFontComboBox::currentFontChanged,[=](const QFont &font){
        ui->msgTxtEdit->setFontFamily(font.toString());
        ui->msgTxtEdit->setFocus();
    });
    //字体大小
    void (QComboBox:: * sizebtn)(const QString &text)=&QComboBox::currentTextChanged;
    connect(ui->sizeCbx,sizebtn,[=](const QString &text){
        ui->msgTxtEdit->setFontPointSize(text.toDouble());
        ui->msgTxtEdit->setFocus();
    });
    //字体的加粗
    connect(ui->boldTBtn,&QToolButton::clicked,[=](bool checked){
        if(checked)
        {
            ui->msgTxtEdit->setFontWeight(QFont::Bold);
        }
        else
        {
            ui->msgTxtEdit->setFontWeight(QFont::Normal);
        }
    });
    //字体倾斜
    connect(ui->italicTbtn,&QToolButton::clicked,[=](bool checked){
        ui->msgTxtEdit->setFontItalic(checked);
        ui->msgTxtEdit->setFocus();
    });
    //字体下划线
    connect(ui->underlineTBtn,&QToolButton::clicked,[=](bool checked){
        ui->msgTxtEdit->setFontUnderline(checked);
        ui->msgTxtEdit->setFocus();
    });
    //清空功能,点击后清空表单
    connect(ui->clearTBtn,&QToolButton::clicked,[=](){
        ui->msgBrower->clear();
    });
    //颜色设置
    connect(ui->colorTBtn,&QToolButton::clicked,[=](){
        QColor color=QColorDialog::getColor(color,this);
        ui->msgTxtEdit->setTextColor(color);
    });
    //保存聊天记录
    connect(ui->saveTBtn,&QToolButton::clicked,[=](){
        if(ui->msgBrower->toPlainText().isEmpty()){
            QMessageBox::warning(this,"警告","保存内容不能为空!");
            return ;
        }
        else
        {
            QString filename=QFileDialog::getSaveFileName(this,"保存聊天记录","聊天记录","(*.txt)");
            if(!filename.isEmpty())
            {
                //保存名称不能为空 再进行保存
                QFile file(filename);
                file.open(QIODevice::WriteOnly | QFile::Text);
                QTextStream stream(&file);
                stream<<ui->msgBrower->toPlainText();
                file.close();
            }
        }
    });
}

void Widget::closeEvent(QCloseEvent *)
{
    emit this->closeWidget();
    sndMsg(UserLeft);
    udpSocket->close();
    udpSocket->destroyed();//销毁
    //QWidget::closeEvent(a);
}
void Widget::sndMsg(Widget::Msgtype type)
{
    //创建数组
    QByteArray arry;
    //创建流，可以分段，参数1
    QDataStream stream(&arry,QIODevice::WriteOnly);
    //将从UDP得到的信息类型流入（发送的消息内容，用户上线信息提示，用户退出信息提示）
    //先流入信息类型，再流入发送的信息，根据流入的信息类型进行判断是聊天内容还是上线或退出的信息
    stream<<type<<this->getName();
    switch (type)
    {
    case Msg:
        if(ui->msgTxtEdit->toPlainText()=="")
        {
            QMessageBox::warning(this,"警告","发送内容不能为空！");
            return ;
        }
        stream<<this->getMsg();//流入普通用户的聊天内容
        break;
    case UserEnter://不是聊天内容 只需流入类型和用户名
        break;
    case UserLeft:
        break;
    }
    //书写报文，播报
    udpSocket->writeDatagram(arry.data(),arry.size(),QHostAddress::Broadcast,this->port);
}
QString Widget::getName()
{
    return this->myname;
}
QString Widget::getMsg()
{
    QString msg=ui->msgTxtEdit->toHtml();//返回输入框的内容
    ui->msgTxtEdit->clear();//将内容清空
    ui->msgTxtEdit->setFocus();//设置光标
    return msg;
}
//信息为用户登入后操作
void Widget::userEnter(QString username)
{
    //设置标志查询表单是否有此用户名
    bool IsEmpty=ui->tableWidget->findItems(username,Qt::MatchExactly).isEmpty();
    if(IsEmpty)//如果没有
    {
        QTableWidgetItem *table=new QTableWidgetItem(username);
        //表单新增一行
        ui->tableWidget->insertRow(0);
        //在单元格中增加内容
        ui->tableWidget->setItem(0,0,table);
        //设置聊天信息框的字体颜色为灰色
        ui->msgBrower->setTextColor(QColor(Qt::gray));
         //追加用户名已上线
        ui->msgBrower->append(username+"已上线聊天");
        //修改底部的上线人数图标的信息，并且格式化字符，计算表单的长度并返回进入
        ui->userNumLbl->setText(QString("在线人数:%1").arg(ui->tableWidget->rowCount()));
        sndMsg(UserEnter);
    }
}
void Widget::userLeft(QString username, QString time)
{
    bool IsEmpty=ui->tableWidget->findItems(username,Qt::MatchExactly).isEmpty();
    if(!IsEmpty)
    {
        //寻找行
        int row=ui->tableWidget->findItems(username,Qt::MatchExactly).first()->row();
        //移除该行
        ui->tableWidget->removeRow(row);
        //追加信息
        ui->msgBrower->setTextColor(QColor(Qt::gray));
        ui->msgBrower->append(QString("%1用户于%2退出聊天").arg(username).arg(time));
        ui->userNumLbl->setText(QString("在线人数:%1").arg(ui->tableWidget->rowCount()));
    }
}

void Widget::ReceiveMessage()
{
    qint64 size=udpSocket->pendingDatagramSize();
    int mysize= static_cast<int>(size);
    QByteArray *array=new QByteArray(mysize,0);
    udpSocket->readDatagram((*array).data(),size);
    QDataStream stream(array,QIODevice::ReadOnly);
    int mytype;
    QString name,msg;//用户名 聊天内容
    QString time=QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    stream>>mytype;
    switch (mytype) {
    case Msg:
        stream>>name>>msg;
        ui->msgBrower->setTextColor(QColor(Qt::blue));
        ui->msgBrower->append("["+name+"]"+time);
        ui->msgBrower->append(msg);
        break;

    case UserLeft:
        stream>>name;
        userLeft(name,time);
        break;

    case UserEnter:
        stream>>name;
        userEnter(name);
        break;
    }

}
Widget::~Widget()
{
        delete ui;
}

