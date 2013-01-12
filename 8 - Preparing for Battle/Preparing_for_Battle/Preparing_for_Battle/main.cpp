#include "preparing_for_battle.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Preparing_for_Battle w;
	w.show();
	return a.exec();
}
