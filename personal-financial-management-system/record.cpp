#include "record.h"
#include <QDateTime>
#include <QTime>
#include <QDate>
#include "user.h"
#include "mainwidget.h"
#include <QDebug>

Record::Record(int index_of_record,QString fileName)
	:file(fileName)
{
    //++recordNum;
	indexOfRecord = index_of_record;
    type = true;
    amount = 0.0;
    note = "";
    QTime current_time = QTime::currentTime();
    QDate current_date = QDate::currentDate();
    currentTime.year = current_date.year();
    currentTime.month = current_date.month();
    currentTime.day = current_date.day();
    currentTime.hour = current_time.hour();
    currentTime.minute = current_time.minute();
	time = "";
	time += QString::number(current_date.year());
	time += QString::number(current_date.month());
	time += QString::number(current_date.day());
	time += QString::number(current_time.hour());
	time += QString::number(current_time.minute());

	record.amount = amount;
	record.note = note;
	record.time = currentTime;
	record.type = type;

	loadRecord(indexOfRecord);
}

Record::~Record()
{
    //--recordNum;
}

bool Record::updateRecord(int index)
{
	updateStructRecord();
	return file.updateRecord(index, record);
	//updateStructRecord();
}

bool Record::loadRecord(int index)
{
	//bool ok = file.loadRecord(index);
	//if (ok)
	//{
	//	record = file.loadedRecord;

	//	amount = record.amount;
	//	note = record.note;
	//	currentTime = record.time;
	//	type = record.type;
	//}
	//else
	//{
	//	return false;
	//}

	file.loadRecord(index);
	record = file.loadedRecord;
	amount = record.amount;
	note = record.note;
	currentTime = record.time;
	type = record.type;
	return true;
}


bool Record::newRecord(int index)
{

	return file.newRecord(index);

}

bool Record::clearRecord(int index)
{
	return file.clearRecord(index);

	//updateStructRecord();
}

void Record::updateStructRecord()
{
	record.amount = amount;
	record.note = note;
	//qDebug() << "note" << note;
	record.time = currentTime;
	record.type = type;
}
