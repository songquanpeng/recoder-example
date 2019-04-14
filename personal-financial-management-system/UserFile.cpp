#include "UserFile.h"
#include <QDebug>
#include<QJsonObject>
UserFile::UserFile()
	:File("userinfo.json")
{
	fileName = "userinfo.json";
	jsonFile = new QFile(fileName);
	if (!openFile("userinfo.json"))
	{
		qDebug() << "Open file failed!";
	}
	loadedContent = loadFile();
	QJsonParseError error;
	document = QJsonDocument::fromJson(loadedContent.toUtf8(), &error);
	if (error.error != QJsonParseError::NoError)
	{
		qDebug() << "Json document parse error!";
	}
	//userArray = document.array();
	userObject = document.object();
}


UserFile::~UserFile()
{
	jsonFile->close();
}

bool UserFile::addUser(QString userName, QString password)
{
	if (!isAlreadyExist(userName))
	{
		//QJsonObject tempJsonObject;
		//tempJsonObject.insert("userName", userName);
		//tempJsonObject.insert("password", password);
		//userArray.append(tempJsonObject);
		QJsonArray tempJsonArray;
		tempJsonArray.append(userName);
		tempJsonArray.append(password);
		//userArray.append()
		userObject.insert(userName, tempJsonArray);
		update();
		return true;
	}
	else
	{
		return false;
	}
}

bool UserFile::deleteUser(QString userName)
{
	if (!isAlreadyExist(userName))
	{
		userObject.remove(userName);
		update();
		return true;
	}
	else
	{
		return false;
	}
}

bool UserFile::isAlreadyExist(QString userName)
{
	//return userArray.contains(userName);
	return userObject.contains(userName);
}

bool UserFile::update()
{
	document.setObject(userObject);
	return updateFile(fileName, &document);
}

bool UserFile::canLogin(QString tempUsername, QString tempPassword)
{
	if (isAlreadyExist(tempUsername))
	{
		bool login;
		login = (userObject.value(tempUsername)[1] == tempPassword);
		return login;
	}
	else
	{
		return false;
	}
}
