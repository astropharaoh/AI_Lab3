/********************************************************************************
** Form generated from reading UI file 'calling_it_quits.ui'
**
** Created: Fri 11. Jan 21:13:04 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALLING_IT_QUITS_H
#define UI_CALLING_IT_QUITS_H

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

class Ui_Calling_It_QuitsClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calling_It_QuitsClass)
    {
        if (Calling_It_QuitsClass->objectName().isEmpty())
            Calling_It_QuitsClass->setObjectName(QString::fromUtf8("Calling_It_QuitsClass"));
        Calling_It_QuitsClass->resize(600, 400);
        menuBar = new QMenuBar(Calling_It_QuitsClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Calling_It_QuitsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Calling_It_QuitsClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Calling_It_QuitsClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Calling_It_QuitsClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Calling_It_QuitsClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Calling_It_QuitsClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Calling_It_QuitsClass->setStatusBar(statusBar);

        retranslateUi(Calling_It_QuitsClass);

        QMetaObject::connectSlotsByName(Calling_It_QuitsClass);
    } // setupUi

    void retranslateUi(QMainWindow *Calling_It_QuitsClass)
    {
        Calling_It_QuitsClass->setWindowTitle(QApplication::translate("Calling_It_QuitsClass", "Calling_It_Quits", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Calling_It_QuitsClass: public Ui_Calling_It_QuitsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALLING_IT_QUITS_H
