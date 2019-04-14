#pragma once

#include <QDialog>
#include "ui_Help.h"

namespace Ui {
	class Dialog;
}
class HelpDialog : public QDialog
{
	Q_OBJECT

public:
	HelpDialog(QWidget *parent);
	~HelpDialog();
private slots:
	void on_okBtn_clicked();

private:
	Ui::Dialog *ui;
};
