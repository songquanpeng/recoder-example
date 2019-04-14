#ifndef showRecordWidget_H
#define showRecordWidget_H

#include <QFrame>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QRadioButton>
#include <QGridLayout>
#include <QPushbutton>
#include "record.h"

class showRecordWidget : public QFrame
{
    Q_OBJECT
public:
    explicit showRecordWidget(int index,QString fileName,QFrame *parent = nullptr);
	~showRecordWidget();
	QGridLayout *mainLayout;
	QLabel *showDataAndTimeLabel;
	QLabel *noteLabel;
	QLabel *amountLabel;
	QLabel *showIndexLabel;
	QLineEdit *amountLineEdit;
	QTextEdit *noteTextEdit;
	QRadioButton *incomeRadioButton;
	QRadioButton *expenseRadioButton;
	QPushButton *saveBtn;
	Record thisRecord;
	void clearRecord();
	int indexOfRecord;
	void setUI();
	void setWidgetStyle();
	void showWhichRecord(int index_of_record);
	void saveRecord();//将用户的信息存储到文件中
signals:

public slots:

private:
private slots:
	void on_saveBtn_clicked();

};

#endif // showRecordWidget_H
