/********************************************************************************
** Form generated from reading UI file 'building_blocks.ui'
**
** Created: Fri 11. Jan 21:21:42 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUILDING_BLOCKS_H
#define UI_BUILDING_BLOCKS_H

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

class Ui_Building_BlocksClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Building_BlocksClass)
    {
        if (Building_BlocksClass->objectName().isEmpty())
            Building_BlocksClass->setObjectName(QString::fromUtf8("Building_BlocksClass"));
        Building_BlocksClass->resize(600, 400);
        menuBar = new QMenuBar(Building_BlocksClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Building_BlocksClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Building_BlocksClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Building_BlocksClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Building_BlocksClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Building_BlocksClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Building_BlocksClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Building_BlocksClass->setStatusBar(statusBar);

        retranslateUi(Building_BlocksClass);

        QMetaObject::connectSlotsByName(Building_BlocksClass);
    } // setupUi

    void retranslateUi(QMainWindow *Building_BlocksClass)
    {
        Building_BlocksClass->setWindowTitle(QApplication::translate("Building_BlocksClass", "Building_Blocks", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Building_BlocksClass: public Ui_Building_BlocksClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUILDING_BLOCKS_H
