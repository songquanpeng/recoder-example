#include "File.h"
#include <QFile>
#include <QJsonDocument>
#include <QTextStream>
#include <QDebug>//仅供调试时使用
#include <QJsonDocument>
#include <QLatin1String>
//#include <QFileInfo>

File::File(QString file_name)
{
    fileName = file_name;
    jsonFile = new QFile(fileName);
    if (!openFile(file_name))
    {
        qDebug() << "Open file failed!";
    }
	loadedContent = loadFile();
}

File::~File()
{
    jsonFile->close();
}

bool File::openFile(QString file_name)
{
    jsonFile->open(QFile::ReadWrite);
    return jsonFile->isOpen();
}



bool File::createNewFile(QString file_name)
{
    QFile newFile(file_name);
    if (newFile.exists())
    {
        return false;
    }
    newFile.open(QIODevice::WriteOnly);
    newFile.close();
}

bool File::deleteFile(QString file_name)
{
    QFile delete_file(file_name);
    if (!delete_file.exists())
    {
        return false;
    }
    if (!delete_file.isOpen())
    {
        return false;
    }
    return delete_file.remove();
}

bool File::updateFile(QString file_name, QJsonDocument *content)
{
    QFile tempFile(fileName);
    if (tempFile.open(QFile::Truncate|QIODevice::Text|QFile::ReadWrite))//判断文件是否正常打开
    {
        QTextStream update(&tempFile);
        update << content->toJson();
        tempFile.close();
        return true;
    }
    else
    {
        qDebug() << "File could not be opened!";
        return false;
    }

}

bool File::update()
{
	return false;
}

QString File::loadFile()
{
    return QLatin1String(jsonFile->readAll());
}
