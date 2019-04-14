/********************************************************************************
** Form generated from reading UI file 'loginui.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINUI_H
#define UI_LOGINUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginuiClass
{
public:

    void setupUi(QWidget *loginuiClass)
    {
        if (loginuiClass->objectName().isEmpty())
            loginuiClass->setObjectName(QStringLiteral("loginuiClass"));
        loginuiClass->resize(600, 400);

        retranslateUi(loginuiClass);

        QMetaObject::connectSlotsByName(loginuiClass);
    } // setupUi

    void retranslateUi(QWidget *loginuiClass)
    {
        loginuiClass->setWindowTitle(QApplication::translate("loginuiClass", "loginui", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginuiClass: public Ui_loginuiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINUI_H
