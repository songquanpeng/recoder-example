#include "loginui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	loginui w;
	w.show();
	return a.exec();
}
