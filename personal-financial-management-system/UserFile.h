#pragma once
#include "file.h"
#include <QJsonArray>
#include <QJsonObject>
class UserFile :
	public File
{
public:
	UserFile();
	~UserFile();
	bool addUser(QString userName, QString password);
	bool deleteUser(QString userName);
	bool isAlreadyExist(QString userName);
	bool update();
	bool canLogin(QString tempUsername, QString tempPassword);
	QJsonDocument document;
	QJsonArray userArray;
	QJsonObject userObject;
};

