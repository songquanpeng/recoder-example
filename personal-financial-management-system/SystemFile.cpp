#include "SystemFile.h"
#include<QJsonObject>
#include <QDebug>

SystemFile::SystemFile()
	:File("systeminfo.json")
{
	fileName = "systeminfo.json";
	jsonFile = new QFile(fileName);
	if (!openFile(fileName))
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
	systeminfoObject = document.object();

}


SystemFile::~SystemFile()
{
	jsonFile->close();
}



bool SystemFile::update(SystemInfo info)
{
	systeminfoObject.insert("fontSize", info.fontSize);
	systeminfoObject.insert("theme", info.theme);
	systeminfoObject.insert("opacity", info.opacity);
	systeminfoObject.insert("numberPerRow", info.numberPerRow);
	systeminfoObject.insert("numberPerColumn", info.numberPerColumn);
	systeminfoObject.insert("bold", info.isBold);
	systeminfoObject.insert("italic", info.isItalic);


	document.setObject(systeminfoObject);
	return updateFile(fileName, &document);
}

bool SystemFile::load()
{
	system_info.fontSize = systeminfoObject.value("fontSize").toInt();
	system_info.theme = systeminfoObject.value("theme").toInt();
	system_info.opacity = systeminfoObject.value("opacity").toDouble();
	system_info.numberPerRow = systeminfoObject.value("numberPerRow").toInt();
	system_info.numberPerColumn = systeminfoObject.value("numberPerColumn").toInt();
	system_info.isBold = systeminfoObject.value("bold").toBool();
	system_info.isItalic = systeminfoObject.value("italic").toBool();

	return true;
}
