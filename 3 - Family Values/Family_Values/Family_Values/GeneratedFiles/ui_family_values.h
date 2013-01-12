/********************************************************************************
** Form generated from reading UI file 'family_values.ui'
**
** Created: Fri 11. Jan 21:16:05 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAMILY_VALUES_H
#define UI_FAMILY_VALUES_H

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

class Ui_Family_ValuesClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Family_ValuesClass)
    {
        if (Family_ValuesClass->objectName().isEmpty())
            Family_ValuesClass->setObjectName(QString::fromUtf8("Family_ValuesClass"));
        Family_ValuesClass->resize(600, 400);
        menuBar = new QMenuBar(Family_ValuesClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Family_ValuesClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Family_ValuesClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Family_ValuesClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Family_ValuesClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Family_ValuesClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Family_ValuesClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Family_ValuesClass->setStatusBar(statusBar);

        retranslateUi(Family_ValuesClass);

        QMetaObject::connectSlotsByName(Family_ValuesClass);
    } // setupUi

    void retranslateUi(QMainWindow *Family_ValuesClass)
    {
        Family_ValuesClass->setWindowTitle(QApplication::translate("Family_ValuesClass", "Family_Values", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Family_ValuesClass: public Ui_Family_ValuesClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAMILY_VALUES_H
