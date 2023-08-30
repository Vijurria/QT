/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_9;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_8;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *msgBrower;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QFontComboBox *fontCbx;
    QComboBox *sizeCbx;
    QToolButton *boldTBtn;
    QToolButton *italicTbtn;
    QToolButton *underlineTBtn;
    QToolButton *colorTBtn;
    QToolButton *saveTBtn;
    QToolButton *clearTBtn;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_5;
    QTextEdit *msgTxtEdit;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *sendBtn;
    QSpacerItem *horizontalSpacer;
    QLabel *userNumLbl;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *exitBtn;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(887, 593);
        horizontalLayout_9 = new QHBoxLayout(Widget);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        widget_8 = new QWidget(Widget);
        widget_8->setObjectName("widget_8");
        horizontalLayout_8 = new QHBoxLayout(widget_8);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        widget_6 = new QWidget(widget_8);
        widget_6->setObjectName("widget_6");
        verticalLayout_3 = new QVBoxLayout(widget_6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(widget_6);
        widget_4->setObjectName("widget_4");
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName("widget_2");
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(widget_2);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        msgBrower = new QTextBrowser(widget);
        msgBrower->setObjectName("msgBrower");

        horizontalLayout->addWidget(msgBrower);


        verticalLayout->addWidget(widget);

        frame_2 = new QFrame(widget_2);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Box);
        horizontalLayout_3 = new QHBoxLayout(frame_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        fontCbx = new QFontComboBox(frame_2);
        fontCbx->setObjectName("fontCbx");

        horizontalLayout_2->addWidget(fontCbx);

        sizeCbx = new QComboBox(frame_2);
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->setObjectName("sizeCbx");

        horizontalLayout_2->addWidget(sizeCbx);

        boldTBtn = new QToolButton(frame_2);
        boldTBtn->setObjectName("boldTBtn");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/jiacu.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        boldTBtn->setIcon(icon);
        boldTBtn->setCheckable(true);

        horizontalLayout_2->addWidget(boldTBtn);

        italicTbtn = new QToolButton(frame_2);
        italicTbtn->setObjectName("italicTbtn");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/qingxie.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        italicTbtn->setIcon(icon1);
        italicTbtn->setCheckable(true);

        horizontalLayout_2->addWidget(italicTbtn);

        underlineTBtn = new QToolButton(frame_2);
        underlineTBtn->setObjectName("underlineTBtn");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/xiahuaxian.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        underlineTBtn->setIcon(icon2);
        underlineTBtn->setCheckable(true);

        horizontalLayout_2->addWidget(underlineTBtn);

        colorTBtn = new QToolButton(frame_2);
        colorTBtn->setObjectName("colorTBtn");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/xing.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        colorTBtn->setIcon(icon3);

        horizontalLayout_2->addWidget(colorTBtn);

        saveTBtn = new QToolButton(frame_2);
        saveTBtn->setObjectName("saveTBtn");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/baocun.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        saveTBtn->setIcon(icon4);

        horizontalLayout_2->addWidget(saveTBtn);

        clearTBtn = new QToolButton(frame_2);
        clearTBtn->setObjectName("clearTBtn");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/qingchu.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearTBtn->setIcon(icon5);

        horizontalLayout_2->addWidget(clearTBtn);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(frame_2);


        horizontalLayout_4->addLayout(verticalLayout);


        verticalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName("widget_3");
        horizontalLayout_5 = new QHBoxLayout(widget_3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        msgTxtEdit = new QTextEdit(widget_3);
        msgTxtEdit->setObjectName("msgTxtEdit");
        msgTxtEdit->setMinimumSize(QSize(0, 0));

        horizontalLayout_5->addWidget(msgTxtEdit);


        verticalLayout_2->addWidget(widget_3);


        verticalLayout_3->addWidget(widget_4);

        widget_5 = new QWidget(widget_6);
        widget_5->setObjectName("widget_5");
        horizontalLayout_6 = new QHBoxLayout(widget_5);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        sendBtn = new QPushButton(widget_5);
        sendBtn->setObjectName("sendBtn");

        horizontalLayout_6->addWidget(sendBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        userNumLbl = new QLabel(widget_5);
        userNumLbl->setObjectName("userNumLbl");

        horizontalLayout_6->addWidget(userNumLbl);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        exitBtn = new QPushButton(widget_5);
        exitBtn->setObjectName("exitBtn");

        horizontalLayout_6->addWidget(exitBtn);


        verticalLayout_3->addWidget(widget_5);


        horizontalLayout_8->addWidget(widget_6);

        widget_7 = new QWidget(widget_8);
        widget_7->setObjectName("widget_7");
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);

        horizontalLayout_8->addWidget(widget_7);

        tableWidget = new QTableWidget(widget_8);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName("tableWidget");

        horizontalLayout_8->addWidget(tableWidget);


        horizontalLayout_9->addWidget(widget_8);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        sizeCbx->setItemText(0, QCoreApplication::translate("Widget", "5", nullptr));
        sizeCbx->setItemText(1, QCoreApplication::translate("Widget", "6", nullptr));
        sizeCbx->setItemText(2, QCoreApplication::translate("Widget", "7", nullptr));
        sizeCbx->setItemText(3, QCoreApplication::translate("Widget", "8", nullptr));
        sizeCbx->setItemText(4, QCoreApplication::translate("Widget", "9", nullptr));
        sizeCbx->setItemText(5, QCoreApplication::translate("Widget", "10", nullptr));
        sizeCbx->setItemText(6, QCoreApplication::translate("Widget", "11", nullptr));
        sizeCbx->setItemText(7, QCoreApplication::translate("Widget", "12", nullptr));
        sizeCbx->setItemText(8, QCoreApplication::translate("Widget", "13", nullptr));

#if QT_CONFIG(tooltip)
        boldTBtn->setToolTip(QCoreApplication::translate("Widget", "\345\212\240\347\262\227", nullptr));
#endif // QT_CONFIG(tooltip)
        boldTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        italicTbtn->setToolTip(QCoreApplication::translate("Widget", "\345\200\276\346\226\234", nullptr));
#endif // QT_CONFIG(tooltip)
        italicTbtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        underlineTBtn->setToolTip(QCoreApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        underlineTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        colorTBtn->setToolTip(QCoreApplication::translate("Widget", "\351\242\234\350\211\262", nullptr));
#endif // QT_CONFIG(tooltip)
        colorTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        saveTBtn->setToolTip(QCoreApplication::translate("Widget", "\344\277\235\345\255\230", nullptr));
#endif // QT_CONFIG(tooltip)
        saveTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        clearTBtn->setToolTip(QCoreApplication::translate("Widget", "\346\270\205\347\251\272", nullptr));
#endif // QT_CONFIG(tooltip)
        clearTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
        sendBtn->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        userNumLbl->setText(QCoreApplication::translate("Widget", "\345\234\250\347\272\277\344\272\272\346\225\260\357\274\2320\344\272\272", nullptr));
        exitBtn->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
