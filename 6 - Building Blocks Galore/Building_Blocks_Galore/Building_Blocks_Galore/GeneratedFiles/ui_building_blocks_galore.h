/********************************************************************************
** Form generated from reading UI file 'building_blocks_galore.ui'
**
** Created: Fri 11. Jan 21:23:28 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUILDING_BLOCKS_GALORE_H
#define UI_BUILDING_BLOCKS_GALORE_H

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

class Ui_Building_Blocks_GaloreClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Building_Blocks_GaloreClass)
    {
        if (Building_Blocks_GaloreClass->objectName().isEmpty())
            Building_Blocks_GaloreClass->setObjectName(QString::fromUtf8("Building_Blocks_GaloreClass"));
        Building_Blocks_GaloreClass->resize(600, 400);
        menuBar = new QMenuBar(Building_Blocks_GaloreClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Building_Blocks_GaloreClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Building_Blocks_GaloreClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Building_Blocks_GaloreClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Building_Blocks_GaloreClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Building_Blocks_GaloreClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Building_Blocks_GaloreClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Building_Blocks_GaloreClass->setStatusBar(statusBar);

        retranslateUi(Building_Blocks_GaloreClass);

        QMetaObject::connectSlotsByName(Building_Blocks_GaloreClass);
    } // setupUi

    void retranslateUi(QMainWindow *Building_Blocks_GaloreClass)
    {
        Building_Blocks_GaloreClass->setWindowTitle(QApplication::translate("Building_Blocks_GaloreClass", "Building_Blocks_Galore", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Building_Blocks_GaloreClass: public Ui_Building_Blocks_GaloreClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUILDING_BLOCKS_GALORE_H
