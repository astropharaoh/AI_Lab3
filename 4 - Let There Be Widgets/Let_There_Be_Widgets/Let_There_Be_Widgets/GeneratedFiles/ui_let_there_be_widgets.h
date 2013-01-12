/********************************************************************************
** Form generated from reading UI file 'let_there_be_widgets.ui'
**
** Created: Fri 11. Jan 21:19:19 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LET_THERE_BE_WIDGETS_H
#define UI_LET_THERE_BE_WIDGETS_H

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

class Ui_Let_There_Be_WidgetsClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Let_There_Be_WidgetsClass)
    {
        if (Let_There_Be_WidgetsClass->objectName().isEmpty())
            Let_There_Be_WidgetsClass->setObjectName(QString::fromUtf8("Let_There_Be_WidgetsClass"));
        Let_There_Be_WidgetsClass->resize(600, 400);
        menuBar = new QMenuBar(Let_There_Be_WidgetsClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Let_There_Be_WidgetsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Let_There_Be_WidgetsClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Let_There_Be_WidgetsClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Let_There_Be_WidgetsClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Let_There_Be_WidgetsClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Let_There_Be_WidgetsClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Let_There_Be_WidgetsClass->setStatusBar(statusBar);

        retranslateUi(Let_There_Be_WidgetsClass);

        QMetaObject::connectSlotsByName(Let_There_Be_WidgetsClass);
    } // setupUi

    void retranslateUi(QMainWindow *Let_There_Be_WidgetsClass)
    {
        Let_There_Be_WidgetsClass->setWindowTitle(QApplication::translate("Let_There_Be_WidgetsClass", "Let_There_Be_Widgets", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Let_There_Be_WidgetsClass: public Ui_Let_There_Be_WidgetsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LET_THERE_BE_WIDGETS_H
