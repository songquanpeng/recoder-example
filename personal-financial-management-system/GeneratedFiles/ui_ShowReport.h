/********************************************************************************
** Form generated from reading UI file 'ShowReport.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWREPORT_H
#define UI_SHOWREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowReport
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *startLineEdit;
    QLabel *showStartDateLabel;
    QLabel *label_2;
    QLineEdit *endLineEdit;
    QLabel *showEndDateLabel;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLabel *showRecordNumberLabel;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *showTotalExpenceLabel;
    QLabel *label_6;
    QLabel *showTotalIncomeLabel;
    QLabel *showNetIncomeLabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QPushButton *okBtn;
    QGridLayout *showChartLayout;

    void setupUi(QWidget *ShowReport)
    {
        if (ShowReport->objectName().isEmpty())
            ShowReport->setObjectName(QStringLiteral("ShowReport"));
        ShowReport->resize(627, 330);
        ShowReport->setMinimumSize(QSize(627, 0));
        gridLayout_3 = new QGridLayout(ShowReport);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(ShowReport);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 20));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label->setTextFormat(Qt::RichText);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        startLineEdit = new QLineEdit(groupBox_2);
        startLineEdit->setObjectName(QStringLiteral("startLineEdit"));
        startLineEdit->setMaximumSize(QSize(51, 16777215));

        gridLayout->addWidget(startLineEdit, 0, 1, 1, 1);

        showStartDateLabel = new QLabel(groupBox_2);
        showStartDateLabel->setObjectName(QStringLiteral("showStartDateLabel"));
        showStartDateLabel->setMinimumSize(QSize(120, 0));
        QFont font1;
        font1.setPointSize(6);
        showStartDateLabel->setFont(font1);
        showStartDateLabel->setFrameShape(QFrame::WinPanel);
        showStartDateLabel->setFrameShadow(QFrame::Sunken);
        showStartDateLabel->setIndent(0);

        gridLayout->addWidget(showStartDateLabel, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        endLineEdit = new QLineEdit(groupBox_2);
        endLineEdit->setObjectName(QStringLiteral("endLineEdit"));
        endLineEdit->setMaximumSize(QSize(51, 16777215));

        gridLayout->addWidget(endLineEdit, 1, 1, 1, 1);

        showEndDateLabel = new QLabel(groupBox_2);
        showEndDateLabel->setObjectName(QStringLiteral("showEndDateLabel"));
        showEndDateLabel->setMinimumSize(QSize(120, 0));
        showEndDateLabel->setFont(font1);
        showEndDateLabel->setFrameShape(QFrame::WinPanel);
        showEndDateLabel->setFrameShadow(QFrame::Sunken);
        showEndDateLabel->setIndent(0);

        gridLayout->addWidget(showEndDateLabel, 1, 2, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(ShowReport);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        showRecordNumberLabel = new QLabel(groupBox_3);
        showRecordNumberLabel->setObjectName(QStringLiteral("showRecordNumberLabel"));
        showRecordNumberLabel->setFrameShape(QFrame::WinPanel);
        showRecordNumberLabel->setFrameShadow(QFrame::Sunken);
        showRecordNumberLabel->setIndent(0);

        gridLayout_4->addWidget(showRecordNumberLabel, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout_4->addWidget(label_5, 1, 0, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        gridLayout_4->addWidget(label_7, 3, 0, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        showTotalExpenceLabel = new QLabel(groupBox_3);
        showTotalExpenceLabel->setObjectName(QStringLiteral("showTotalExpenceLabel"));
        showTotalExpenceLabel->setFrameShape(QFrame::WinPanel);
        showTotalExpenceLabel->setFrameShadow(QFrame::Sunken);
        showTotalExpenceLabel->setIndent(0);

        gridLayout_4->addWidget(showTotalExpenceLabel, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        gridLayout_4->addWidget(label_6, 2, 0, 1, 1);

        showTotalIncomeLabel = new QLabel(groupBox_3);
        showTotalIncomeLabel->setObjectName(QStringLiteral("showTotalIncomeLabel"));
        showTotalIncomeLabel->setFrameShape(QFrame::WinPanel);
        showTotalIncomeLabel->setFrameShadow(QFrame::Sunken);
        showTotalIncomeLabel->setIndent(0);

        gridLayout_4->addWidget(showTotalIncomeLabel, 2, 1, 1, 1);

        showNetIncomeLabel = new QLabel(groupBox_3);
        showNetIncomeLabel->setObjectName(QStringLiteral("showNetIncomeLabel"));
        showNetIncomeLabel->setFrameShape(QFrame::WinPanel);
        showNetIncomeLabel->setFrameShadow(QFrame::Sunken);
        showNetIncomeLabel->setIndent(0);

        gridLayout_4->addWidget(showNetIncomeLabel, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox_3);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        groupBox = new QGroupBox(ShowReport);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 209));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        okBtn = new QPushButton(groupBox);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setMinimumSize(QSize(217, 0));

        gridLayout_2->addWidget(okBtn, 1, 0, 1, 1);

        showChartLayout = new QGridLayout();
        showChartLayout->setSpacing(6);
        showChartLayout->setObjectName(QStringLiteral("showChartLayout"));

        gridLayout_2->addLayout(showChartLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 1, 1, 1);


        retranslateUi(ShowReport);

        QMetaObject::connectSlotsByName(ShowReport);
    } // setupUi

    void retranslateUi(QWidget *ShowReport)
    {
        ShowReport->setWindowTitle(QApplication::translate("ShowReport", "ShowReport", nullptr));
        groupBox_2->setTitle(QString());
        label->setText(QApplication::translate("ShowReport", "Start Index:", nullptr));
        showStartDateLabel->setText(QString());
        label_2->setText(QApplication::translate("ShowReport", "End Index:", nullptr));
        showEndDateLabel->setText(QString());
        groupBox_3->setTitle(QString());
        showRecordNumberLabel->setText(QString());
        label_5->setText(QApplication::translate("ShowReport", "Total expence:", nullptr));
        label_7->setText(QApplication::translate("ShowReport", "Net income:", nullptr));
        label_3->setText(QApplication::translate("ShowReport", "Record number:", nullptr));
        showTotalExpenceLabel->setText(QString());
        label_6->setText(QApplication::translate("ShowReport", "Total income:", nullptr));
        showTotalIncomeLabel->setText(QString());
        showNetIncomeLabel->setText(QString());
        groupBox->setTitle(QString());
        okBtn->setText(QApplication::translate("ShowReport", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowReport: public Ui_ShowReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWREPORT_H
