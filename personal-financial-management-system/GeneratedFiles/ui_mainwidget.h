/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *usernameLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *windowBtnLayout;
    QPushButton *minBtn;
    QPushButton *maxBtn;
    QPushButton *exitBtn;
    QHBoxLayout *btnLayout;
    QPushButton *settingBtn;
    QPushButton *newBtn;
    QPushButton *deleteBtn;
    QPushButton *reportBtn;
    QPushButton *importBtn;
    QPushButton *findBtn;
    QPushButton *othersBtn;
    QGridLayout *showLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *editableBtn;
    QPushButton *saveBtn;
    QPushButton *helpBtn;
    QPushButton *logoutBtn;
    QLabel *indexLabel;
    QLineEdit *indexLineEdit;
    QPushButton *gotoBtn;
    QPushButton *previousBtn;
    QPushButton *nextBtn;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QStringLiteral("MainWidget"));
        MainWidget->resize(905, 578);
        gridLayout = new QGridLayout(MainWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        titleLabel = new QLabel(MainWidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        titleLabel->setFont(font);

        horizontalLayout_2->addWidget(titleLabel);

        horizontalSpacer = new QSpacerItem(150, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        usernameLabel = new QLabel(MainWidget);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));

        horizontalLayout_2->addWidget(usernameLabel);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        windowBtnLayout = new QHBoxLayout();
        windowBtnLayout->setObjectName(QStringLiteral("windowBtnLayout"));
        minBtn = new QPushButton(MainWidget);
        minBtn->setObjectName(QStringLiteral("minBtn"));
        minBtn->setMinimumSize(QSize(25, 25));
        minBtn->setMaximumSize(QSize(25, 25));

        windowBtnLayout->addWidget(minBtn);

        maxBtn = new QPushButton(MainWidget);
        maxBtn->setObjectName(QStringLiteral("maxBtn"));
        maxBtn->setMinimumSize(QSize(25, 25));
        maxBtn->setMaximumSize(QSize(25, 25));

        windowBtnLayout->addWidget(maxBtn);

        exitBtn = new QPushButton(MainWidget);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setMinimumSize(QSize(25, 25));
        exitBtn->setMaximumSize(QSize(25, 25));

        windowBtnLayout->addWidget(exitBtn);


        horizontalLayout_2->addLayout(windowBtnLayout);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        btnLayout = new QHBoxLayout();
        btnLayout->setObjectName(QStringLiteral("btnLayout"));
        settingBtn = new QPushButton(MainWidget);
        settingBtn->setObjectName(QStringLiteral("settingBtn"));

        btnLayout->addWidget(settingBtn);

        newBtn = new QPushButton(MainWidget);
        newBtn->setObjectName(QStringLiteral("newBtn"));

        btnLayout->addWidget(newBtn);

        deleteBtn = new QPushButton(MainWidget);
        deleteBtn->setObjectName(QStringLiteral("deleteBtn"));
        deleteBtn->setMinimumSize(QSize(0, 21));

        btnLayout->addWidget(deleteBtn);

        reportBtn = new QPushButton(MainWidget);
        reportBtn->setObjectName(QStringLiteral("reportBtn"));
        reportBtn->setMinimumSize(QSize(0, 21));

        btnLayout->addWidget(reportBtn);

        importBtn = new QPushButton(MainWidget);
        importBtn->setObjectName(QStringLiteral("importBtn"));
        importBtn->setMinimumSize(QSize(0, 21));

        btnLayout->addWidget(importBtn);

        findBtn = new QPushButton(MainWidget);
        findBtn->setObjectName(QStringLiteral("findBtn"));
        findBtn->setMinimumSize(QSize(0, 21));

        btnLayout->addWidget(findBtn);

        othersBtn = new QPushButton(MainWidget);
        othersBtn->setObjectName(QStringLiteral("othersBtn"));
        othersBtn->setMinimumSize(QSize(0, 21));

        btnLayout->addWidget(othersBtn);


        gridLayout->addLayout(btnLayout, 1, 0, 1, 1);

        showLayout = new QGridLayout();
        showLayout->setObjectName(QStringLiteral("showLayout"));

        gridLayout->addLayout(showLayout, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        editableBtn = new QPushButton(MainWidget);
        editableBtn->setObjectName(QStringLiteral("editableBtn"));
        editableBtn->setMinimumSize(QSize(0, 21));

        horizontalLayout->addWidget(editableBtn);

        saveBtn = new QPushButton(MainWidget);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));
        saveBtn->setMinimumSize(QSize(0, 21));

        horizontalLayout->addWidget(saveBtn);

        helpBtn = new QPushButton(MainWidget);
        helpBtn->setObjectName(QStringLiteral("helpBtn"));
        helpBtn->setMinimumSize(QSize(0, 21));

        horizontalLayout->addWidget(helpBtn);

        logoutBtn = new QPushButton(MainWidget);
        logoutBtn->setObjectName(QStringLiteral("logoutBtn"));
        logoutBtn->setMinimumSize(QSize(0, 21));

        horizontalLayout->addWidget(logoutBtn);

        indexLabel = new QLabel(MainWidget);
        indexLabel->setObjectName(QStringLiteral("indexLabel"));
        indexLabel->setMinimumSize(QSize(0, 21));

        horizontalLayout->addWidget(indexLabel);

        indexLineEdit = new QLineEdit(MainWidget);
        indexLineEdit->setObjectName(QStringLiteral("indexLineEdit"));
        indexLineEdit->setMinimumSize(QSize(0, 21));

        horizontalLayout->addWidget(indexLineEdit);

        gotoBtn = new QPushButton(MainWidget);
        gotoBtn->setObjectName(QStringLiteral("gotoBtn"));

        horizontalLayout->addWidget(gotoBtn);

        previousBtn = new QPushButton(MainWidget);
        previousBtn->setObjectName(QStringLiteral("previousBtn"));

        horizontalLayout->addWidget(previousBtn);

        nextBtn = new QPushButton(MainWidget);
        nextBtn->setObjectName(QStringLiteral("nextBtn"));

        horizontalLayout->addWidget(nextBtn);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);


        retranslateUi(MainWidget);
        QObject::connect(indexLineEdit, SIGNAL(textChanged(QString)), gotoBtn, SLOT(click()));

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QApplication::translate("MainWidget", "Form", nullptr));
        titleLabel->setText(QApplication::translate("MainWidget", "Personal Financial Management System", nullptr));
        usernameLabel->setText(QApplication::translate("MainWidget", "Current user:", nullptr));
        minBtn->setText(QString());
        maxBtn->setText(QString());
        exitBtn->setText(QString());
        settingBtn->setText(QApplication::translate("MainWidget", "Setting", nullptr));
        newBtn->setText(QApplication::translate("MainWidget", "New", nullptr));
        deleteBtn->setText(QApplication::translate("MainWidget", "Clear", nullptr));
        reportBtn->setText(QApplication::translate("MainWidget", "Report", nullptr));
        importBtn->setText(QApplication::translate("MainWidget", "Import", nullptr));
        findBtn->setText(QApplication::translate("MainWidget", "Find", nullptr));
        othersBtn->setText(QApplication::translate("MainWidget", "Others", nullptr));
        editableBtn->setText(QApplication::translate("MainWidget", "Editable", nullptr));
        saveBtn->setText(QApplication::translate("MainWidget", "Save", nullptr));
        helpBtn->setText(QApplication::translate("MainWidget", "Help", nullptr));
        logoutBtn->setText(QApplication::translate("MainWidget", "Log out", nullptr));
        indexLabel->setText(QApplication::translate("MainWidget", "Index:", nullptr));
        gotoBtn->setText(QApplication::translate("MainWidget", "Goto", nullptr));
        previousBtn->setText(QApplication::translate("MainWidget", "Previous", nullptr));
        nextBtn->setText(QApplication::translate("MainWidget", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
