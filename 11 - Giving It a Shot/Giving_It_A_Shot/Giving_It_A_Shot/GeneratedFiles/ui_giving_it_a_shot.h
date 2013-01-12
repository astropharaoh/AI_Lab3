/********************************************************************************
** Form generated from reading UI file 'giving_it_a_shot.ui'
**
** Created: Fri 11. Jan 22:38:06 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GIVING_IT_A_SHOT_H
#define UI_GIVING_IT_A_SHOT_H

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

class Ui_Giving_It_A_ShotClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Giving_It_A_ShotClass)
    {
        if (Giving_It_A_ShotClass->objectName().isEmpty())
            Giving_It_A_ShotClass->setObjectName(QString::fromUtf8("Giving_It_A_ShotClass"));
        Giving_It_A_ShotClass->resize(600, 400);
        menuBar = new QMenuBar(Giving_It_A_ShotClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Giving_It_A_ShotClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Giving_It_A_ShotClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Giving_It_A_ShotClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Giving_It_A_ShotClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Giving_It_A_ShotClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Giving_It_A_ShotClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Giving_It_A_ShotClass->setStatusBar(statusBar);

        retranslateUi(Giving_It_A_ShotClass);

        QMetaObject::connectSlotsByName(Giving_It_A_ShotClass);
    } // setupUi

    void retranslateUi(QMainWindow *Giving_It_A_ShotClass)
    {
        Giving_It_A_ShotClass->setWindowTitle(QApplication::translate("Giving_It_A_ShotClass", "Giving_It_A_Shot", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Giving_It_A_ShotClass: public Ui_Giving_It_A_ShotClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GIVING_IT_A_SHOT_H
