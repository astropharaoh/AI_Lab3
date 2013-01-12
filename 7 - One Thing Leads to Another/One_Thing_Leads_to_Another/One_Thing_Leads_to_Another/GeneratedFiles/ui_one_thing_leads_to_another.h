/********************************************************************************
** Form generated from reading UI file 'one_thing_leads_to_another.ui'
**
** Created: Fri 11. Jan 22:25:00 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONE_THING_LEADS_TO_ANOTHER_H
#define UI_ONE_THING_LEADS_TO_ANOTHER_H

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

class Ui_One_Thing_Leads_to_AnotherClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *One_Thing_Leads_to_AnotherClass)
    {
        if (One_Thing_Leads_to_AnotherClass->objectName().isEmpty())
            One_Thing_Leads_to_AnotherClass->setObjectName(QString::fromUtf8("One_Thing_Leads_to_AnotherClass"));
        One_Thing_Leads_to_AnotherClass->resize(600, 400);
        menuBar = new QMenuBar(One_Thing_Leads_to_AnotherClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        One_Thing_Leads_to_AnotherClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(One_Thing_Leads_to_AnotherClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        One_Thing_Leads_to_AnotherClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(One_Thing_Leads_to_AnotherClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        One_Thing_Leads_to_AnotherClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(One_Thing_Leads_to_AnotherClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        One_Thing_Leads_to_AnotherClass->setStatusBar(statusBar);

        retranslateUi(One_Thing_Leads_to_AnotherClass);

        QMetaObject::connectSlotsByName(One_Thing_Leads_to_AnotherClass);
    } // setupUi

    void retranslateUi(QMainWindow *One_Thing_Leads_to_AnotherClass)
    {
        One_Thing_Leads_to_AnotherClass->setWindowTitle(QApplication::translate("One_Thing_Leads_to_AnotherClass", "One_Thing_Leads_to_Another", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class One_Thing_Leads_to_AnotherClass: public Ui_One_Thing_Leads_to_AnotherClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONE_THING_LEADS_TO_ANOTHER_H
