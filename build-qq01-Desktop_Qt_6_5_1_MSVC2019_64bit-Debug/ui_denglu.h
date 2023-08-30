/********************************************************************************
** Form generated from reading UI file 'denglu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENGLU_H
#define UI_DENGLU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_denglu
{
public:
    QHBoxLayout *horizontalLayout;
    QToolBox *toolBox;
    QWidget *widget;
    QVBoxLayout *vlayout;

    void setupUi(QWidget *denglu)
    {
        if (denglu->objectName().isEmpty())
            denglu->setObjectName("denglu");
        denglu->resize(408, 700);
        denglu->setMinimumSize(QSize(200, 550));
        horizontalLayout = new QHBoxLayout(denglu);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        toolBox = new QToolBox(denglu);
        toolBox->setObjectName("toolBox");
        toolBox->setMinimumSize(QSize(150, 550));
        widget = new QWidget();
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 408, 666));
        vlayout = new QVBoxLayout(widget);
        vlayout->setObjectName("vlayout");
        vlayout->setContentsMargins(0, 0, 0, 0);
        toolBox->addItem(widget, QString::fromUtf8("\347\276\244\346\210\220\345\221\230"));

        horizontalLayout->addWidget(toolBox);


        retranslateUi(denglu);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(denglu);
    } // setupUi

    void retranslateUi(QWidget *denglu)
    {
        denglu->setWindowTitle(QCoreApplication::translate("denglu", "Form", nullptr));
        toolBox->setItemText(toolBox->indexOf(widget), QCoreApplication::translate("denglu", "\347\276\244\346\210\220\345\221\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class denglu: public Ui_denglu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENGLU_H
