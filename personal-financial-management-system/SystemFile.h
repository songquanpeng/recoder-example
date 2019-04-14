#pragma once
#include "file.h"
#include <QJsonArray>
#include <QJsonObject>
//#include "mainwidget.h"

struct SystemInfo
{
	int fontSize;
	int theme;
	double opacity;
	int numberPerRow;
	int numberPerColumn;
	bool isBold;
	bool isItalic;
};


class SystemFile :
	public File
{
public:
	SystemFile();
	~SystemFile();
	bool update(SystemInfo info);
	bool load();
	SystemInfo system_info;

private:
	QJsonDocument document;
	QJsonObject systeminfoObject;


};

