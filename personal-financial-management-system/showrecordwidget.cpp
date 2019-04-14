#include "showRecordWidget.h"
#include <QLabel>
#include <QGridLayout>
//#include <QVBoxLayout>
#include "record.h"
#include <QLineEdit>
#include <QTextEdit>
#include <QRadioButton>
#include <QMessageBox>

showRecordWidget::showRecordWidget(int index, QString fileName,QFrame *parent)
	: QFrame(parent),
	thisRecord(index,fileName)
{
	
	indexOfRecord = index;
	setUI();
	setWidgetStyle();
	connect(saveBtn, SIGNAL(clicked(bool)), this, SLOT(on_saveBtn_clicked()));
	showWhichRecord(indexOfRecord);
}

showRecordWidget::~showRecordWidget()
{
	saveRecord();
}

void showRecordWidget::clearRecord()
{
	noteTextEdit->setText(thisRecord.note);
	showIndexLabel->setText("Index: " + QString::number(indexOfRecord));
	amountLineEdit->setText(QString::number(0));
	noteTextEdit->setText("");


}

void showRecordWidget::setUI()
{
	mainLayout = new QGridLayout(this);
	//this->setStyleSheet(QString::fromUtf8("border:2px solid blue"));
	showDataAndTimeLabel = new QLabel("Data and Time ");
	noteLabel = new QLabel("Note:");
	amountLabel = new QLabel("Amount:");
	showIndexLabel = new QLabel("Index: "+QString::number(indexOfRecord));
	amountLineEdit = new QLineEdit;
	noteTextEdit = new QTextEdit;
	incomeRadioButton = new QRadioButton("&Income");
	expenseRadioButton = new QRadioButton("&Expence");
	saveBtn = new QPushButton("&Save");
	mainLayout->addWidget(showDataAndTimeLabel, 0, 0);
	mainLayout->addWidget(showIndexLabel, 0, 1);
	mainLayout->addWidget(incomeRadioButton, 1, 0);
	mainLayout->addWidget(expenseRadioButton, 1, 1);
	mainLayout->addWidget(amountLabel, 2, 0);
	mainLayout->addWidget(amountLineEdit, 2, 1);
	mainLayout->addWidget(noteLabel, 3, 0, 1, 1);
	//mainLayout->addWidget(saveBtn, 3, 1, 1, 1);
	mainLayout->addWidget(noteTextEdit, 4, 0, 3, 2);

}

void showRecordWidget::setWidgetStyle()
{

}

void showRecordWidget::on_saveBtn_clicked()
{
	thisRecord.updateRecord(indexOfRecord);
	//QMessageBox::information(this, tr("test"), tr("Just for test!"));

}

void showRecordWidget::showWhichRecord(int index_of_record)
{
	indexOfRecord = index_of_record;
	showDataAndTimeLabel->setText("Time: "+thisRecord.time);
	noteTextEdit->setText(thisRecord.note);
	showIndexLabel->setText("Index: " + QString::number(indexOfRecord));
	amountLineEdit->setText(QString::number(thisRecord.amount));
	if (thisRecord.type==true)
	{
		//showDataAndTimeLabel->setText("Debug");
		incomeRadioButton->setChecked(true);
	}
	else
	{
		expenseRadioButton->setChecked(true);
	}
}

void showRecordWidget::saveRecord()
{
	//Debug
	//noteLabel->setText(amountLineEdit->text());

	thisRecord.note = noteTextEdit->toPlainText();
	thisRecord.amount = amountLineEdit->text().toDouble();
	if (incomeRadioButton->QAbstractButton::isChecked())
	{
		thisRecord.type = true;
	}
	else
	{
		thisRecord.type = false;
	}
	thisRecord.updateRecord(indexOfRecord);
}
