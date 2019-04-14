#pragma once
#include <QString>
#include "UserFile.h"
class User
{
public:
    User();
    ~User();

    //类的属性
    QString username;
    QString password;

    //类提供的服务
     bool addUser(QString newUsername, QString newPassword);//操纵 UserInfo.dat 文件;操作成功时返回true,否则返回false
     bool deleteUser(QString processedUser);//操纵 UserInfo.dat 文件;操作成功时返回true,否则返回false
     bool isAlreadyExist(QString processedUser);//检查是否已经存在一个相同用户,存在则返回true,否则返回false
	 bool canLogin(QString tempUsername, QString tempPassword);
	 void setCurrentUser(QString username);//设置当前用户
	 QString getCurrentUser();//获得当前用户的用户名
	 QString currentUsername;//当前用户的用户名
	 static QString currentUser;
private:
    
	UserFile file;

};
