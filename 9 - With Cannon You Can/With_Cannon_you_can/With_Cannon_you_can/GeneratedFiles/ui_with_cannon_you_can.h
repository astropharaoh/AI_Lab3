/********************************************************************************
** Form generated from reading UI file 'with_cannon_you_can.ui'
**
** Created: Fri 11. Jan 22:34:34 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITH_CANNON_YOU_CAN_H
#define UI_WITH_CANNON_YOU_CAN_H

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

class Ui_With_Cannon_you_canClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *With_Cannon_you_canClass)
    {
        if (With_Cannon_you_canClass->objectName().isEmpty())
            With_Cannon_you_canClass->setObjectName(QString::fromUtf8("With_Cannon_you_canClass"));
        With_Cannon_you_canClass->resize(600, 400);
        menuBar = new QMenuBar(With_Cannon_you_canClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        With_Cannon_you_canClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(With_Cannon_you_canClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        With_Cannon_you_canClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(With_Cannon_you_canClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        With_Cannon_you_canClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(With_Cannon_you_canClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        With_Cannon_you_canClass->setStatusBar(statusBar);

        retranslateUi(With_Cannon_you_canClass);

        QMetaObject::connectSlotsByName(With_Cannon_you_canClass);
    } // setupUi

    void retranslateUi(QMainWindow *With_Cannon_you_canClass)
    {
        With_Cannon_you_canClass->setWindowTitle(QApplication::translate("With_Cannon_you_canClass", "With_Cannon_you_can", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class With_Cannon_you_canClass: public Ui_With_Cannon_you_canClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITH_CANNON_YOU_CAN_H
