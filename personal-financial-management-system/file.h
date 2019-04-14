#pragma once
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QJsonDocument>

class File
{
public:
    File(QString file_name);
    ~File();
    bool openFile(QString file_name);//存在问题
    bool createNewFile(QString file_name);//存在问题
    bool deleteFile(QString file_name);//存在问题
    bool updateFile(QString file_name, QJsonDocument *content);//可以使用
	bool update();
    QString loadFile();//返回字符串形式的Json文档//可以使用

    QString fileName;
    QFile* jsonFile;
	QString loadedContent;
};

