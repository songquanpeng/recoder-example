#include "RecordFile.h"
#include <QDateTime>
#include <QTime>
#include <QDate>
#include <QDebug>


RecordFile::RecordFile(QString file_name)
	:File(file_name)
{
	fileName = file_name;
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
	//recordObject = document.object();
	recordArray = document.array();

}


RecordFile::~RecordFile()
{
	jsonFile->close();

}

bool RecordFile::clearRecord(int index)
{
	if (isRecordExist(index))
	{
		recordObject = recordArray[index].toObject();
		recordObject.value("type") = true;
		recordObject.value("amount") = 0;
		recordObject.value("note") = "";
		recordObject.value("year") = 0;
		recordObject.value("month") = 0;
		recordObject.value("day") = 0;
		recordObject.value("hour") = 0;
		recordObject.value("minute") = 0;
		update();
		return true;
	}
	else
	{
		return false;
	}
}

bool RecordFile::newRecord(int index)
{
	QTime current_time = QTime::currentTime();
	QDate current_date = QDate::currentDate();
	//recordObject.value("type") = true;
	//recordObject.value("amount") = 0;
	//recordObject.value("note") = "";
	//recordObject.value("year") = current_date.year();
	//recordObject.value("month") = current_date.month();
	//recordObject.value("day") = current_date.day();
	//recordObject.value("hour") = current_time.hour();
	//recordObject.value("minute") = current_time.minute();
	//recordObject.value("index") = recordArray.size();

	recordObject.insert("type", true);
	recordObject.insert("amount",0);
	recordObject.insert("note","Input your note here.");
	recordObject.insert("year", current_date.year());
	recordObject.insert("month", current_date.month());
	recordObject.insert("day", current_date.day());
	recordObject.insert("hour", current_time.hour());
	recordObject.insert("minute", current_time.minute());
	recordObject.insert("index", recordArray.size());

	recordArray.append(recordObject);
	update();
	return true;
}

bool RecordFile::updateRecord(int index, StructRecord record)
{
	if (isRecordExist(index))
	{
		//loadRecord(index);
		recordObject = recordArray[index].toObject();
		recordObject.insert("type", record.type);
		recordObject.insert("amount", record.amount);
		recordObject.insert("note", record.note);
		recordArray[index] = recordObject;
		//recordObject.value("type") = record.type;
		//recordObject.value("amount") = record.amount;
		//recordObject.value("note") = record.note;
		update();
		return true;
	}
	else
	{
		return false;
	}

}

bool RecordFile::loadRecord(int index)
{

	if (isRecordExist(index))
	{
		recordObject = recordArray[index].toObject();
		loadedRecord.amount = recordObject.value("amount").toDouble();
		loadedRecord.index = index;
		loadedRecord.note = recordObject.value("note").toString();
		loadedRecord.type = recordObject.value("type").toBool();
		loadedRecord.time.year = recordObject.value("year").toInt();
		loadedRecord.time.month = recordObject.value("month").toInt();
		loadedRecord.time.day = recordObject.value("day").toInt();
		loadedRecord.time.hour = recordObject.value("hour").toInt();
		loadedRecord.time.minute = recordObject.value("minute").toInt();

		return 0;
	}
	else
	{
		return false;
	}
}

bool RecordFile::isRecordExist(int index)
{
	if (recordArray.size() > index)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool RecordFile::update()
{
	document.setArray(recordArray);
	return updateFile(fileName, &document);
}

//if (isRecordExist(index))
//{
//	recordObject = recordArray[index].toObject();
//	recordObject.value("type") =
//		recordObject.value("amount") =
//		recordObject.value("note") =
//		recordObject.value("year") =
//		recordObject.value("month") =
//		recordObject.value("day") =
//		recordObject.value("hour") =
//		recordObject.value("minute") =
//		return true;
//}
//else
//{
//	return false;
//}
