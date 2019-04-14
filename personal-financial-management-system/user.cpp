#include "User.h"


User::User()
{
	
}

User::~User()
{
}

bool User::addUser(QString newUsername, QString newPassword)
{
	return file.addUser(newUsername, newPassword);
}

bool User::deleteUser(QString processedUser)
{
	return file.deleteUser(processedUser);
}

bool User::isAlreadyExist(QString processedUser)
{
	return file.isAlreadyExist(processedUser);
}

bool User::canLogin(QString tempUsername, QString tempPassword)
{
	return file.canLogin(tempUsername, tempPassword);
}

void User::setCurrentUser(QString username)
{
	currentUsername = username;
}

QString User::getCurrentUser()
{
	return currentUsername;
}
