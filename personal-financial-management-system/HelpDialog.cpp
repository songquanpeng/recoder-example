#include "HelpDialog.h"
#include "ui_Help.h"
HelpDialog::HelpDialog(QWidget *parent)
	: QDialog(parent),
	ui(new Ui::Dialog)
{
	ui->setupUi(this);
	setWindowTitle("Help");
}

HelpDialog::~HelpDialog()
{
}

void HelpDialog::on_okBtn_clicked()
{
	QDialog::close();
}