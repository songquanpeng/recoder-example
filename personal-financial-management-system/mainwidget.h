#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "showrecordwidget.h"
#include "RecordFile.h"
#include "SystemFile.h"
//#include "SystemFile.h"//????????????????????????????????????????
//#include <QFont>



namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QString userName,QWidget *parent = 0);
    ~MainWidget();
	QString currentUser;
	QString fileName;
	SystemInfo systemInfo;
    //virtual void mousePressEvent(QMouseEvent *event);
	int currentRecord;
private slots:
    void on_settingBtn_clicked();

    void on_newBtn_clicked();

    void on_deleteBtn_clicked();

    void on_reportBtn_clicked();
    void on_exitBtn_clicked();

    void on_maxBtn_clicked();

    void on_minBtn_clicked();

	void on_saveBtn_clicked();

	void on_previousBtn_clicked();	

	void on_nextBtn_clicked();
		void on_gotoBtn_clicked();

	void on_logoutBtn_clicked();

	void on_editableBtn_clicked();

	void on_helpBtn_clicked();

	void on_importBtn_clicked();
	
	//void on_indexLineEdit_inputed();

private:
    Ui::MainWidget *ui;
    void setStyle();
    void setshowRecordWidget();
	void setShortcut();
	bool editable;
	void updateSetting();

	showRecordWidget *showRecord;
	//showRecordWidget *temp2;
	//showRecordWidget *temp3;

	RecordFile file;
	SystemFile systemFile;

};

#endif // MAINWIDGET_H
