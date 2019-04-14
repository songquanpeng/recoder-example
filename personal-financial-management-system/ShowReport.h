#pragma once

#include <QWidget>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QChartView>
//using namespace QtCharts;

namespace Ui { class ShowReport; };

class ShowReport : public QWidget
{
	Q_OBJECT

public:
	ShowReport(QString user_name,QWidget *parent = Q_NULLPTR);
	~ShowReport();

private:
	Ui::ShowReport *ui;
	QString username;
private slots:
	void on_okBtn_clicked();
};
