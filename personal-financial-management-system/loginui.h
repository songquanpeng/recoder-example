#pragma once

#include <QtWidgets/QWidget>
#include "ui_loginui.h"

class loginui : public QWidget
{
	Q_OBJECT

public:
	loginui(QWidget *parent = Q_NULLPTR);

private:
	Ui::loginuiClass ui;
};
