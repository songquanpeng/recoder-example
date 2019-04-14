#include "ShowReport.h"
#include "ui_ShowReport.h"
#include <QMessageBox>
#include "RecordFile.h"


ShowReport::ShowReport(QString user_name, QWidget *parent)
	: QWidget(parent)
{
	username = user_name;
	ui = new Ui::ShowReport();
	ui->setupUi(this);
	//ui->okBtn->hide();
	setWindowTitle("Report");
	ui->startLineEdit->setText("0");
	ui->endLineEdit->setText("2");
	//connect(ui->startLineEdit, SIGNAL(textChanged()), this, SLOT(on_textChanged()));
	//connect(ui->endLineEdit, SIGNAL(textChanged()), this, SLOT(on_textChanged()));
	//on_okBtn_clicked();
	
}

ShowReport::~ShowReport()
{
	delete ui;
}

void ShowReport::on_okBtn_clicked()
{
	//bool *ok;
	//bool *ok2;
	//ui->startLineEdit->text().toInt();
	//ui->endLineEdit->text().toInt();
	//if (!ok||!ok2)
	//{
	//	return;
	//}
	int startIndex = ui->startLineEdit->text().toInt();
	int endIndex = ui->endLineEdit->text().toInt();
	if (endIndex < startIndex || endIndex < 0 || startIndex < 0)
	{
		return;
	}


	RecordFile *file = new RecordFile(username + ".json");
	int totalExpence = 0;
	int totalIncome = 0;
	int recordNumber = 0;
	for (int i = startIndex; i <= endIndex; ++i)
	{
		++recordNumber;
		file->loadRecord(i);
		if (file->loadedRecord.type)
		{
			totalIncome += file->loadedRecord.amount;
		}
		else
		{
			totalExpence += file->loadedRecord.amount;
		}
	}
	file->loadRecord(startIndex);
	ui->showStartDateLabel->setText(QString::number(file->loadedRecord.time.year%100) + ":" + QString::number(file->loadedRecord.time.month) + ":" + QString::number(file->loadedRecord.time.day) + ":" + QString::number(file->loadedRecord.time.hour) + ":" + QString::number(file->loadedRecord.time.minute));
	file->loadRecord(endIndex);
	ui->showEndDateLabel->setText(QString::number(file->loadedRecord.time.year%100) + ":" + QString::number(file->loadedRecord.time.month) + ":" + QString::number(file->loadedRecord.time.day) + ":" + QString::number(file->loadedRecord.time.hour) + ":" + QString::number(file->loadedRecord.time.minute));
	ui->showRecordNumberLabel->setText(QString::number(recordNumber));
	ui->showTotalExpenceLabel->setText(QString::number(totalExpence));
	ui->showTotalIncomeLabel->setText(QString::number(totalIncome));
	ui->showNetIncomeLabel->setText(QString::number(totalIncome-totalExpence));

	






}

