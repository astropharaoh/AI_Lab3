/********************************************************************************
** Form generated from reading UI file 'hanging_in_the_air.ui'
**
** Created: Fri 11. Jan 22:40:17 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HANGING_IN_THE_AIR_H
#define UI_HANGING_IN_THE_AIR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hanging_in_the_AirClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Hanging_in_the_AirClass)
    {
        if (Hanging_in_the_AirClass->objectName().isEmpty())
            Hanging_in_the_AirClass->setObjectName(QString::fromUtf8("Hanging_in_the_AirClass"));
        Hanging_in_the_AirClass->resize(600, 400);
        menuBar = new QMenuBar(Hanging_in_the_AirClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Hanging_in_the_AirClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Hanging_in_the_AirClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Hanging_in_the_AirClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Hanging_in_the_AirClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Hanging_in_the_AirClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Hanging_in_the_AirClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Hanging_in_the_AirClass->setStatusBar(statusBar);

        retranslateUi(Hanging_in_the_AirClass);

        QMetaObject::connectSlotsByName(Hanging_in_the_AirClass);
    } // setupUi

    void retranslateUi(QMainWindow *Hanging_in_the_AirClass)
    {
        Hanging_in_the_AirClass->setWindowTitle(QApplication::translate("Hanging_in_the_AirClass", "Hanging_in_the_Air", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Hanging_in_the_AirClass: public Ui_Hanging_in_the_AirClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HANGING_IN_THE_AIR_H
