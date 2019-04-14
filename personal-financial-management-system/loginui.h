#ifndef LOGINUI_H
#define LOGINUI_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include "user.h"

class loginUI : public QWidget
{
    Q_OBJECT

public:
    loginUI(QWidget *parent = 0);
    ~loginUI();
    void setClose(bool);
    void remainTimesDecrease();
    bool getClose();

private:
    QLabel *userNameLabel;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QLineEdit *usernameLineEdit;
    QPushButton *loginBtn;
    QPushButton *registerBtn;
    void generateUI();
    void setStyle();
    bool close;
    int remainTimes;
	User tempUser;
private slots:
    void on_loginBtn_clicked();
    void on_registerBtn_clicked();
};

#endif // LOGINUI_H
