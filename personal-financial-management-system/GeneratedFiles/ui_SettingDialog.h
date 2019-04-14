/********************************************************************************
** Form generated from reading UI file 'SettingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDIALOG_H
#define UI_SETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog1
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *themeGroupBox;
    QGridLayout *gridLayout_2;
    QRadioButton *darkRadioButton;
    QRadioButton *lightRadioButton;
    QRadioButton *defaultRadioButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *opacityLineEdit;
    QLabel *numberPerRowLabel;
    QLabel *numberPerColumnLabel;
    QLabel *opacityLabel;
    QLineEdit *numberPerRowLineEdit;
    QLineEdit *numberPerColumnLineEdit;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QLineEdit *fontSizeLineEdit;
    QCheckBox *boldCheckBox;
    QCheckBox *italicCheckBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QPushButton *cancelBtn;
    QPushButton *okBtn;

    void setupUi(QDialog *Dialog1)
    {
        if (Dialog1->objectName().isEmpty())
            Dialog1->setObjectName(QStringLiteral("Dialog1"));
        Dialog1->resize(387, 227);
        gridLayout_4 = new QGridLayout(Dialog1);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        themeGroupBox = new QGroupBox(Dialog1);
        themeGroupBox->setObjectName(QStringLiteral("themeGroupBox"));
        gridLayout_2 = new QGridLayout(themeGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        darkRadioButton = new QRadioButton(themeGroupBox);
        darkRadioButton->setObjectName(QStringLiteral("darkRadioButton"));

        gridLayout_2->addWidget(darkRadioButton, 1, 0, 1, 1);

        lightRadioButton = new QRadioButton(themeGroupBox);
        lightRadioButton->setObjectName(QStringLiteral("lightRadioButton"));

        gridLayout_2->addWidget(lightRadioButton, 2, 0, 1, 1);

        defaultRadioButton = new QRadioButton(themeGroupBox);
        defaultRadioButton->setObjectName(QStringLiteral("defaultRadioButton"));

        gridLayout_2->addWidget(defaultRadioButton, 0, 0, 1, 1);


        gridLayout_4->addWidget(themeGroupBox, 0, 0, 1, 1);

        groupBox = new QGroupBox(Dialog1);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        opacityLineEdit = new QLineEdit(groupBox);
        opacityLineEdit->setObjectName(QStringLiteral("opacityLineEdit"));

        gridLayout->addWidget(opacityLineEdit, 0, 1, 1, 1);

        numberPerRowLabel = new QLabel(groupBox);
        numberPerRowLabel->setObjectName(QStringLiteral("numberPerRowLabel"));

        gridLayout->addWidget(numberPerRowLabel, 1, 0, 1, 1);

        numberPerColumnLabel = new QLabel(groupBox);
        numberPerColumnLabel->setObjectName(QStringLiteral("numberPerColumnLabel"));

        gridLayout->addWidget(numberPerColumnLabel, 2, 0, 1, 1);

        opacityLabel = new QLabel(groupBox);
        opacityLabel->setObjectName(QStringLiteral("opacityLabel"));

        gridLayout->addWidget(opacityLabel, 0, 0, 1, 1);

        numberPerRowLineEdit = new QLineEdit(groupBox);
        numberPerRowLineEdit->setObjectName(QStringLiteral("numberPerRowLineEdit"));

        gridLayout->addWidget(numberPerRowLineEdit, 1, 1, 1, 1);

        numberPerColumnLineEdit = new QLineEdit(groupBox);
        numberPerColumnLineEdit->setObjectName(QStringLiteral("numberPerColumnLineEdit"));

        gridLayout->addWidget(numberPerColumnLineEdit, 2, 1, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(Dialog1);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        fontSizeLineEdit = new QLineEdit(groupBox_3);
        fontSizeLineEdit->setObjectName(QStringLiteral("fontSizeLineEdit"));

        gridLayout_5->addWidget(fontSizeLineEdit, 0, 1, 1, 2);

        boldCheckBox = new QCheckBox(groupBox_3);
        boldCheckBox->setObjectName(QStringLiteral("boldCheckBox"));

        gridLayout_5->addWidget(boldCheckBox, 1, 0, 1, 2);

        italicCheckBox = new QCheckBox(groupBox_3);
        italicCheckBox->setObjectName(QStringLiteral("italicCheckBox"));

        gridLayout_5->addWidget(italicCheckBox, 1, 2, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(Dialog1);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        cancelBtn = new QPushButton(groupBox_2);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));

        gridLayout_3->addWidget(cancelBtn, 0, 0, 1, 1);

        okBtn = new QPushButton(groupBox_2);
        okBtn->setObjectName(QStringLiteral("okBtn"));

        gridLayout_3->addWidget(okBtn, 0, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 1, 1, 1, 1);


        retranslateUi(Dialog1);

        QMetaObject::connectSlotsByName(Dialog1);
    } // setupUi

    void retranslateUi(QDialog *Dialog1)
    {
        Dialog1->setWindowTitle(QApplication::translate("Dialog1", "Dialog", nullptr));
        themeGroupBox->setTitle(QApplication::translate("Dialog1", "Theme", nullptr));
        darkRadioButton->setText(QApplication::translate("Dialog1", "Dark Theme", nullptr));
        lightRadioButton->setText(QApplication::translate("Dialog1", "Light Theme", nullptr));
        defaultRadioButton->setText(QApplication::translate("Dialog1", "Default Theme", nullptr));
        groupBox->setTitle(QApplication::translate("Dialog1", "Others", nullptr));
        numberPerRowLabel->setText(QApplication::translate("Dialog1", "Number per row:", nullptr));
        numberPerColumnLabel->setText(QApplication::translate("Dialog1", "Number per column:", nullptr));
        opacityLabel->setText(QApplication::translate("Dialog1", "Opacity:", nullptr));
        groupBox_3->setTitle(QString());
        label->setText(QApplication::translate("Dialog1", "Font Size:", nullptr));
        boldCheckBox->setText(QApplication::translate("Dialog1", "Bold", nullptr));
        italicCheckBox->setText(QApplication::translate("Dialog1", "Italic", nullptr));
        groupBox_2->setTitle(QString());
        cancelBtn->setText(QApplication::translate("Dialog1", "Cancel", nullptr));
        okBtn->setText(QApplication::translate("Dialog1", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog1: public Ui_Dialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDIALOG_H
