#ifndef HANGING_IN_THE_AIR_H
#define HANGING_IN_THE_AIR_H

#include <QtGui/QMainWindow>
#include "ui_hanging_in_the_air.h"

class Hanging_in_the_Air : public QMainWindow
{
	Q_OBJECT

public:
	Hanging_in_the_Air(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Hanging_in_the_Air();

private:
	Ui::Hanging_in_the_AirClass ui;
};

#endif // HANGING_IN_THE_AIR_H
