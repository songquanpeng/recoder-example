#include "loginui.h"
#include <QGridLayout>
#include <QHBoxLayout>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QCoreApplication>
#include <QMessageBox>
#include "mainwidget.h"
#include "user.h"
loginUI::loginUI(QWidget *parent)
    : QWidget(parent)
{
    close = false;
    remainTimes = 3;
    generateUI();
    setStyle();
    connect(loginBtn,SIGNAL(clicked(bool)),this,SLOT(on_loginBtn_clicked()));
    connect(passwordLineEdit,SIGNAL(returnPressed()),this,SLOT(on_registerBtn_clicked()));
    connect(registerBtn,SIGNAL(clicked(bool)),this,SLOT(on_registerBtn_clicked()));
}

loginUI::~loginUI()
{

}

void loginUI::generateUI()
{
    userNameLabel = new QLabel(tr("User name:"));
    passwordLabel = new QLabel(tr("Password:"));

    usernameLineEdit = new QLineEdit;
    passwordLineEdit = new QLineEdit;
    passwordLineEdit->setEchoMode(QLineEdit::Password);

    registerBtn = new QPushButton(tr("Register"));
    loginBtn = new QPushButton(tr("Login"));

    QGridLayout *mainLayout = new QGridLayout(this);
    mainLayout->addWidget(userNameLabel,0,0);
    mainLayout->addWidget(usernameLineEdit,0,1);
    mainLayout->addWidget(passwordLabel,1,0);
    mainLayout->addWidget(passwordLineEdit,1,1);
    mainLayout->addWidget(registerBtn,2,0);
    mainLayout->addWidget(loginBtn,2,1);
}

void loginUI::setStyle()
{
    /*
     * 参考:
     * https://blog.csdn.net/huangan_xixi/article/details/50878046
     * https://www.cnblogs.com/Ten10/p/Ten19.html
     * http://doc.qt.io/qt-5/stylesheet-examples.html
     * http://www.cnblogs.com/wangqiguo/p/4960776.html
     */

    setWindowTitle("Login Interface");//设置窗口标题
//    this->setStyleSheet("loginUI { background-color: black }");
//    this->setStyleSheet("userNameLabel{ background-color: write }");
//    this->setStyleSheet("passwordLabel { background-color: write }");

}

void loginUI::on_loginBtn_clicked()
{
	QString username = usernameLineEdit->text().trimmed();
	QString password = passwordLineEdit->text().trimmed();
    if(tempUser.canLogin(username,password))
    {
		//User::currentUsername = username;
        setClose(true);
        //QWidget::close();
		//User::currentUser = usernameLineEdit->text().trimmed();

        MainWidget *mainWidget = new MainWidget(username);
		//mainWidget->currentUser = username;
		mainWidget->show();
        QWidget::close();
    }
    else
    {
        remainTimesDecrease();
        QMessageBox::warning(this,tr("Warning"),tr("Please check the input and try again"),QMessageBox::Ok);
        passwordLineEdit->setFocus();
    }
}

void loginUI::on_registerBtn_clicked()
{
    //QMessageBox::information(this,tr("Register a new user"),tr("Still need to improve"),QMessageBox::Ok);
	QString username = usernameLineEdit->text().trimmed();
	QString password = passwordLineEdit->text().trimmed();
	if (username == "" || password == ""||username == "userinfo"||username == "systeminfo")//!!!!
	{
		QMessageBox::warning(this, tr("Warning"), tr("Check your input!"), QMessageBox::Ok);
		return;
	}
	if (!tempUser.addUser(username, password))
	{
		QMessageBox::warning(this, tr("Warning"), tr("Register failed"), QMessageBox::Ok);

	}
	else
	{
		QMessageBox::information(this, tr("Info"), tr("Register success"), QMessageBox::Ok);
	}
}

void loginUI::setClose(bool x)
{
    close=x;
}

void loginUI::remainTimesDecrease()
{
    if(--remainTimes<=0)
    {
        QCoreApplication::quit();
    }
}

bool loginUI::getClose()
{
    return close;
}
