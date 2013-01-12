/********************************************************************************
** Form generated from reading UI file 'preparing_for_battle.ui'
**
** Created: Fri 11. Jan 22:32:03 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREPARING_FOR_BATTLE_H
#define UI_PREPARING_FOR_BATTLE_H

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

class Ui_Preparing_for_BattleClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Preparing_for_BattleClass)
    {
        if (Preparing_for_BattleClass->objectName().isEmpty())
            Preparing_for_BattleClass->setObjectName(QString::fromUtf8("Preparing_for_BattleClass"));
        Preparing_for_BattleClass->resize(600, 400);
        menuBar = new QMenuBar(Preparing_for_BattleClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Preparing_for_BattleClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Preparing_for_BattleClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Preparing_for_BattleClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Preparing_for_BattleClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Preparing_for_BattleClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Preparing_for_BattleClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Preparing_for_BattleClass->setStatusBar(statusBar);

        retranslateUi(Preparing_for_BattleClass);

        QMetaObject::connectSlotsByName(Preparing_for_BattleClass);
    } // setupUi

    void retranslateUi(QMainWindow *Preparing_for_BattleClass)
    {
        Preparing_for_BattleClass->setWindowTitle(QApplication::translate("Preparing_for_BattleClass", "Preparing_for_Battle", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Preparing_for_BattleClass: public Ui_Preparing_for_BattleClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREPARING_FOR_BATTLE_H
