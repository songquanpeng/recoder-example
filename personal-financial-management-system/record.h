#ifndef RECORD_H
#define RECORD_H
#include <QString>
#include "RecordFile.h"


class Record//所有的Record共用一个RecordFile 对象
{
public:
    Record(int index_of_record,QString fileName);
    ~Record();
    //static int recordNum;//用于记录一共有多少条记录
	int indexOfRecord;
    bool type;//如果为true,则为收入;如果为false,则为支出
    double amount;//金额
	QString currentUsername;
    QString note;//用于储存备注
    Time currentTime;//用于储存时间
	StructRecord record;
	QString time;
	RecordFile file;
	bool updateRecord(int index);//用于更新记录,将用户输入的信息储存进文件
	bool loadRecord(int index);
	//bool deleteRecord();
	bool newRecord(int index);//
	bool clearRecord(int index);//
private:
	void updateStructRecord();
};

#endif // RECORD_H
