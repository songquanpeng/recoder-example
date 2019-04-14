#include "SettingDialog.h"
#include "ui_SettingDialog.h"
#include <QMessageBox>


SettingDialog::SettingDialog(QDialog *parent):
	QDialog(parent),
	ui(new Ui::Dialog1)
{
	
	ui->setupUi(this);
	setWindowTitle("Setting");
	loadSetting();
}


SettingDialog::~SettingDialog()
{

}

bool SettingDialog::updateSetting()
{
	setting.isBold = ui->boldCheckBox->isChecked();
	setting.isItalic = ui->italicCheckBox->isChecked();
	if (ui->defaultRadioButton->QAbstractButton::isChecked())
	{
		setting.theme = 1;
	}
	else if (ui->darkRadioButton->QAbstractButton::isChecked())
	{
		setting.theme = 2;
	}
	else
	{
		setting.theme = 3;
	}
	double tempOpicity = ui->opacityLineEdit->text().toDouble();
	int tempRow = ui->numberPerRowLineEdit->text().toInt();
	int tempColumn = ui->numberPerColumnLineEdit->text().toInt();
	int tempFontSize = ui->fontSizeLineEdit->text().toInt();
	bool isWrong = false;
	if (tempOpicity > 1 || tempOpicity <= 0)
	{
		tempOpicity = 0.95;
		ui->opacityLineEdit->setText(QString::number(tempOpicity));
		isWrong = true;
	}
	if (tempRow <= 0)
	{
		tempRow = 1;
		ui->numberPerRowLineEdit->setText(QString::number(tempRow));
		isWrong = true;
	}
	if (tempColumn <= 0)
	{
		tempColumn = 1;
		ui->numberPerColumnLineEdit->setText(QString::number(tempColumn));
		isWrong = true;
	}
	if (tempFontSize <= 0)
	{
		tempFontSize = 12;
		ui->fontSizeLineEdit->setText(QString::number(tempFontSize));
		isWrong = true;
	}

	if (isWrong)
	{
		QMessageBox::warning(this, tr("Warning"), tr("Wrong argument"), QMessageBox::Ok);
	}
	else
	{
		setting.opacity = tempOpicity;
		setting.numberPerColumn = tempColumn;
		setting.numberPerRow = tempRow;
		setting.fontSize = tempFontSize;
	}
	if (isWrong)
	{
		return false;
	}

	QDialog::accept();
	return file.update(setting);
}

void SettingDialog::loadSetting()
{

	file.load();
	setting = file.system_info;
	ui->opacityLineEdit->setText(QString::number(setting.opacity));
	ui->numberPerRowLineEdit->setText(QString::number(setting.numberPerRow));
	ui->numberPerColumnLineEdit->setText(QString::number(setting.numberPerColumn));
	ui->fontSizeLineEdit->setText(QString::number(setting.fontSize));

	if (setting.theme == 1)
	{
		ui->defaultRadioButton->setChecked(true);
	}
	else if (setting.theme == 2)
	{
		ui->darkRadioButton->setChecked(true);
	}
	else if(setting.theme == 3)
	{
		ui->lightRadioButton->setChecked(true);
	}
	ui->boldCheckBox->setChecked(setting.isBold);
	ui->italicCheckBox->setChecked(setting.isItalic);
}

void SettingDialog::on_cancelBtn_clicked()
{
	QDialog::close();
}

void SettingDialog::on_okBtn_clicked()
{
	if (updateSetting())
	{
		QDialog::close();
	}
}