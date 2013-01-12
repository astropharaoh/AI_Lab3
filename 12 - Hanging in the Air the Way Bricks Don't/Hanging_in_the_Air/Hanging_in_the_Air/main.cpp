#include "hanging_in_the_air.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Hanging_in_the_Air w;
	w.show();
	return a.exec();
}
