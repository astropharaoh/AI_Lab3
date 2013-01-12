/********************************************************************************
** Form generated from reading UI file 'hello_world.ui'
**
** Created: Fri 11. Jan 21:01:56 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLO_WORLD_H
#define UI_HELLO_WORLD_H

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

class Ui_Hello_WorldClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Hello_WorldClass)
    {
        if (Hello_WorldClass->objectName().isEmpty())
            Hello_WorldClass->setObjectName(QString::fromUtf8("Hello_WorldClass"));
        Hello_WorldClass->resize(600, 400);
        menuBar = new QMenuBar(Hello_WorldClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Hello_WorldClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Hello_WorldClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Hello_WorldClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Hello_WorldClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Hello_WorldClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Hello_WorldClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Hello_WorldClass->setStatusBar(statusBar);

        retranslateUi(Hello_WorldClass);

        QMetaObject::connectSlotsByName(Hello_WorldClass);
    } // setupUi

    void retranslateUi(QMainWindow *Hello_WorldClass)
    {
        Hello_WorldClass->setWindowTitle(QApplication::translate("Hello_WorldClass", "Hello_World", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Hello_WorldClass: public Ui_Hello_WorldClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLO_WORLD_H
