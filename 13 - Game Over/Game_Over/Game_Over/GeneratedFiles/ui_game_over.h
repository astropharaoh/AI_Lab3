/********************************************************************************
** Form generated from reading UI file 'game_over.ui'
**
** Created: Fri 11. Jan 22:42:50 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_OVER_H
#define UI_GAME_OVER_H

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

class Ui_Game_OverClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Game_OverClass)
    {
        if (Game_OverClass->objectName().isEmpty())
            Game_OverClass->setObjectName(QString::fromUtf8("Game_OverClass"));
        Game_OverClass->resize(600, 400);
        menuBar = new QMenuBar(Game_OverClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Game_OverClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Game_OverClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Game_OverClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Game_OverClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Game_OverClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Game_OverClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Game_OverClass->setStatusBar(statusBar);

        retranslateUi(Game_OverClass);

        QMetaObject::connectSlotsByName(Game_OverClass);
    } // setupUi

    void retranslateUi(QMainWindow *Game_OverClass)
    {
        Game_OverClass->setWindowTitle(QApplication::translate("Game_OverClass", "Game_Over", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Game_OverClass: public Ui_Game_OverClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_OVER_H
