#include "denglu.h"
#include "ui_denglu.h"
#include<QIcon>
#include<QString>
#include<QToolButton>
#include<widget.h>
#include<QMessageBox>
denglu::denglu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::denglu)
{
    ui->setupUi(this);
    //设置图标
    //路径：冒号+前缀+路径
    this->setWindowIcon(QIcon(":/images/qqkt.jpg"));
    //设置名称
    this->setWindowTitle("qq 2023");
    QList<QString> nameList;
    nameList<<"小飞侠"<<"小飞猪"<<"小飞象"<<"喜羊羊"<<"美羊羊"<<"懒熊熊"<<"兔蛮蛮"<<"懒洋洋"<<"猪猪侠";
    QStringList iconNameList;//图标资源列表
    iconNameList<<"pp1"<<"pp2"<<"pp3"<<"pp4"<<"pp5"<<"pp6"<<"pp7"<<"pp8"<<"pp9";
    QVector<QToolButton *> vector;
    for(int i=0;i<9;i++)
    {
        QToolButton *btn=new QToolButton(this);
        //加载图片
        btn->setIcon(QPixmap(QString(":/images/%1.jpg").arg(iconNameList[i])));
        //设置图片大小
        btn->setIconSize(QPixmap(QString(":/images/%1.jpg").arg(iconNameList[i])).size());
        //设置网名
        btn->setText(QString("%1").arg(nameList[i]));
        //设置为透明
        btn->setAutoRaise(true);
        //设置显示格式
        btn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        //放到vlayout布局中
        ui->vlayout->addWidget(btn);
        vector.push_back(btn);
        IsShow.push_back(false);
    }
    for(int i=0;i<9;i++)
    {
        connect(vector[i],&QToolButton::clicked,[=](){
            if(IsShow[i])
            {
                QMessageBox::warning(this,"警告","该聊天框已被打开！");
                return ;
            }
            IsShow[i]=true;
            Widget *widget=new Widget(nullptr,vector[i]->text());
            widget->setWindowIcon(vector[i]->icon());
            widget->setWindowTitle(vector[i]->text());
            widget->show();
            //关闭时将对应的IsShow变为false
            connect(widget,&Widget::closeWidget,this,[=](){
                IsShow[i]=false;
            });
        });
    }
}

denglu::~denglu()
{
    delete ui;
}
