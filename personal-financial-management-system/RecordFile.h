#pragma once
#include "file.h"
#include <QJsonArray>
#include <QJsonObject>

struct Time
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
};

struct StructRecord
{
	bool type;
	QString note;
	double amount;
	int index;
	Time time;
};

class RecordFile :
	public File
{
public:
	RecordFile(QString fileName);
	~RecordFile();
	bool clearRecord(int index);
	bool newRecord(int index);
	bool updateRecord(int index, StructRecord record);
	bool loadRecord(int index);
	bool isRecordExist(int index);
	bool update();
	QString fileName;
	StructRecord loadedRecord;
	QJsonDocument document;
	QJsonArray recordArray;
	QJsonObject recordObject;
};

