#include "mainwidget.h"
#include "ui_mainwidget.h"
#include <QMessageBox>
#include "showRecordWidget.h"
#include "SettingDialog.h"
#include <QLineEdit>
#include "loginui.h"
#include <QFont>
#include "HelpDialog.h"
#include "ShowReport.h"
#include <QFileDialog>
#include <QDebug>
#include <QList>
#include <QVariantList>
#include <QVariant>
 

MainWidget::MainWidget(QString userName,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget),
	file(userName+".json")
{
	currentRecord = 0;
	editable = true;
	currentUser = userName;
	fileName = currentUser + ".json";
    ui->setupUi(this);
	ui->usernameLabel->setText("Current user: " + currentUser);//不能放在ui->setupUi(this);前面
	showRecord = new showRecordWidget(0,fileName);

    //setStyle();
    setWindowTitle(" ");
    setWindowFlags(Qt::WindowTitleHint|Qt::CustomizeWindowHint );
    setshowRecordWidget();
	setShortcut();

	setStyle();
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::setshowRecordWidget()
{
	ui->showLayout->addWidget(showRecord, 0, 0);
	ui->gotoBtn->hide();
}

void MainWidget::setShortcut()
{
	ui->settingBtn->setShortcut(tr("alt+s"));
	ui->newBtn->setShortcut(tr("ctrl+n"));
	ui->deleteBtn->setShortcut(tr("ctrl+c"));
	ui->reportBtn->setShortcut(tr("ctrl+r"));
	ui->importBtn->setShortcut(tr("ctrl+i"));
	ui->findBtn->setShortcut(tr("ctrl+f"));
	ui->othersBtn->setShortcut(tr("ctrl+o"));
	ui->editableBtn->setShortcut(tr("ctrl+e"));
	ui->saveBtn->setShortcut(tr("ctrl+s"));
	ui->helpBtn->setShortcut(tr("ctrl+h"));
	ui->logoutBtn->setShortcut(tr("ctrl+l"));
	ui->previousBtn->setShortcut(tr("up"));
	ui->nextBtn->setShortcut(tr("down"));
}

void MainWidget::updateSetting()
{
	systemFile.load();
	systemInfo = systemFile.system_info;
}
	


void MainWidget::setStyle()
{
	updateSetting();
    ui->minBtn->setStyleSheet("QPushButton{background-color:green;border:2px groove gray;border-radius:10px;padding:2px 4px;}");
    ui->maxBtn->setStyleSheet("QPushButton{background-color:blue;border:2px groove gray;border-radius:10px;padding:2px 4px;}");
    ui->exitBtn->setStyleSheet("QPushButton{background-color:red;border:2px groove gray;border-radius:10px;padding:2px 4px;}");
	this->setWindowOpacity(systemInfo.opacity);
	//this->setWindowOpacity(systemInfo.opacity);
	
	QFont tempFont;
	tempFont.setPointSize(systemInfo.fontSize);
	tempFont.setBold(systemInfo.isBold);
	tempFont.setItalic(systemInfo.isItalic);

	this->setFont(tempFont);
}

void MainWidget::on_settingBtn_clicked()
{
    //QMessageBox::information(this,tr("Sorry"),tr("This feature is not yet ready."));
	SettingDialog *settingDialog = new SettingDialog();
	int temp = settingDialog->QDialog::exec();
	if (temp == 1)
	{
		setStyle();
	}
}

void MainWidget::on_deleteBtn_clicked()
{
	//showRecord->thisRecord.clearRecord(currentRecord);

	showRecord->clearRecord();
	showRecord->saveRecord();
}

void MainWidget::on_reportBtn_clicked()
{
    //QMessageBox::information(this,tr("test"),tr("Just for test!"));
	ShowReport *report = new ShowReport(currentUser);
	report->show();
}


void MainWidget::on_exitBtn_clicked()
{
    exit(0);
}

void MainWidget::on_maxBtn_clicked()
{
    this->showMaximized();
}

void MainWidget::on_minBtn_clicked()
{
    this->showMinimized();
}

void MainWidget::on_saveBtn_clicked()
{
	showRecord->saveRecord();
	//temp2->saveRecord();
//	temp3->saveRecord();
}

void MainWidget::on_previousBtn_clicked()
{
	//QMessageBox::information(this, tr("test"), tr("Just for test!"));

	if (currentRecord >= 1)
	{
		//ui->showLayout->removeWidget(showRecord);
		showRecord->saveRecord();
		currentRecord--;
		showRecord->hide();
		showRecord = new showRecordWidget(currentRecord,fileName);

		ui->showLayout->addWidget(showRecord, 0, 0);
		showRecord->amountLineEdit->setReadOnly(!editable);//不要忘记加!
		showRecord->noteTextEdit->setReadOnly(!editable);

	}
}

void MainWidget::on_nextBtn_clicked()
{
	showRecord->saveRecord();

	//ui->showLayout->removeWidget(showRecord);
	currentRecord++;
	showRecord->hide();

	showRecord = new showRecordWidget(currentRecord, fileName);

	ui->showLayout->addWidget(showRecord, 0, 0);
	showRecord->amountLineEdit->setReadOnly(!editable);
	showRecord->noteTextEdit->setReadOnly(!editable);
}

void MainWidget::on_gotoBtn_clicked()
{
	showRecord->saveRecord();
	currentRecord = ui->indexLineEdit->text().trimmed().toInt();
	showRecord->hide();

	showRecord = new showRecordWidget(currentRecord, fileName);

	ui->showLayout->addWidget(showRecord, 0, 0);

	showRecord->amountLineEdit->setReadOnly(editable);
	showRecord->noteTextEdit->setReadOnly(editable);
}

void MainWidget::on_logoutBtn_clicked()
{
	if (QMessageBox::Ok == QMessageBox::question(this, tr("log out"), tr("Are you sure to log out?"), QMessageBox::Ok | QMessageBox::Cancel, QMessageBox::Ok))
	{
		loginUI *login = new loginUI;
		login->show();
		QWidget::close();
	}

}

void MainWidget::on_editableBtn_clicked()
{
	if (!editable)
	{
		editable = true;
		ui->editableBtn->setText("Editable");
		showRecord->amountLineEdit->setReadOnly(false);
		showRecord->noteTextEdit->setReadOnly(false);

	}
	else
	{
		editable = false;
		ui->editableBtn->setText("Uneditable");
		showRecord->amountLineEdit->setReadOnly(true);
		showRecord->noteTextEdit->setReadOnly(true);

	}
	
}

void MainWidget::on_helpBtn_clicked()
{
	//QString helpString = "Shortcut:\nSetting:alt+s\nNew:ctrl+n\nClear:ctrl+c"
	//	"\nReport:ctrl+r\nImport:ctrl+i\nFind:ctrl+f\nOthers:ctrl+o\nEditable:ctrl+e"
	//	"\nSave:ctrl+s\nHelp:ctrl+h\nLog out:ctrl+l\nPrevious:up\nNext:down";
	//QMessageBox::information(this, tr("Help"), helpString);
	HelpDialog *help = new HelpDialog(this);
	help->QDialog::exec();
}

void MainWidget::on_importBtn_clicked()
{
	QString filePath = QFileDialog::getOpenFileName(this, tr("Import Json File"), "/", "Json files(*.json)");
	//QMessageBox::information(this, tr("Debug"), filePath);


	QFile updateThisFile(fileName);
	if (updateThisFile.open(QIODevice::ReadWrite|QIODevice::Text))//判断文件是否正常打开
	{
		QTextStream update(&updateThisFile);
		QFile *loadFromThisFile = new QFile(filePath);
		if (loadFromThisFile->open(QIODevice::ReadOnly | QIODevice::Text))
		{
			QString newContent = QLatin1String(loadFromThisFile->readAll());
			QJsonParseError error;
			QJsonDocument tempDocument = QJsonDocument::fromJson(newContent.toUtf8(), &error);
			if (error.error != QJsonParseError::NoError)
			{
				qDebug() << "Json document parse error!";
			}

			QString oldContent = QLatin1String(updateThisFile.readAll());
			QJsonParseError error2;
			QJsonDocument tempDocument2 = QJsonDocument::fromJson(oldContent.toUtf8(), &error);
			if (error2.error != QJsonParseError::NoError)
			{
				qDebug() << "Json document parse error!";
			}




			QList<QVariant> oldVariantList = tempDocument2.toVariant().toList();
			QList<QVariant> newVariantList = tempDocument.toVariant().toList();
			//QVariant newVariant = tempDocument.toVariant();
			oldVariantList += newVariantList;

			QVariant *variant = new QVariant(oldVariantList);
			tempDocument = variant->toJsonDocument();


			update << tempDocument.toJson();
			loadFromThisFile->close();
		}
		else
		{
			qDebug() << "File could not be opened!";
		}
		updateThisFile.close();
	}
	else
	{
		qDebug() << "File could not be opened!";
	}




}

//void MainWidget::on_indexLineEdit_inputed()
//{
//
//}

void MainWidget::on_newBtn_clicked()
{
	file.newRecord(1);
	++currentRecord;
}

