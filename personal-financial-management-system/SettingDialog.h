#pragma once
#include <QDialog>
#include "SystemFile.h"

namespace Ui {//uic -o XXX.h XXX.ui
class Dialog1;
}



class SettingDialog : public QDialog
{
	Q_OBJECT

public:
	SettingDialog(QDialog *parent = 0);
	~SettingDialog();
	SystemInfo setting;
	SystemFile file;

	bool updateSetting();
	void loadSetting();

private:
	Ui::Dialog1 *ui;

private slots:

	void on_okBtn_clicked();

	void on_cancelBtn_clicked();
};

