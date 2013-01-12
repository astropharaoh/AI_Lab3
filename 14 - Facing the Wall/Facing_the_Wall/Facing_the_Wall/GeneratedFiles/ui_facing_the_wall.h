/********************************************************************************
** Form generated from reading UI file 'facing_the_wall.ui'
**
** Created: Fri 11. Jan 21:25:40 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACING_THE_WALL_H
#define UI_FACING_THE_WALL_H

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

class Ui_Facing_the_WallClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Facing_the_WallClass)
    {
        if (Facing_the_WallClass->objectName().isEmpty())
            Facing_the_WallClass->setObjectName(QString::fromUtf8("Facing_the_WallClass"));
        Facing_the_WallClass->resize(600, 400);
        menuBar = new QMenuBar(Facing_the_WallClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Facing_the_WallClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Facing_the_WallClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Facing_the_WallClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Facing_the_WallClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Facing_the_WallClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Facing_the_WallClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Facing_the_WallClass->setStatusBar(statusBar);

        retranslateUi(Facing_the_WallClass);

        QMetaObject::connectSlotsByName(Facing_the_WallClass);
    } // setupUi

    void retranslateUi(QMainWindow *Facing_the_WallClass)
    {
        Facing_the_WallClass->setWindowTitle(QApplication::translate("Facing_the_WallClass", "Facing_the_Wall", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Facing_the_WallClass: public Ui_Facing_the_WallClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACING_THE_WALL_H
