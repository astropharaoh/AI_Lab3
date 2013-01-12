/********************************************************************************
** Form generated from reading UI file 'smooth_as_silk.ui'
**
** Created: Fri 11. Jan 22:36:16 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMOOTH_AS_SILK_H
#define UI_SMOOTH_AS_SILK_H

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

class Ui_Smooth_As_SilkClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Smooth_As_SilkClass)
    {
        if (Smooth_As_SilkClass->objectName().isEmpty())
            Smooth_As_SilkClass->setObjectName(QString::fromUtf8("Smooth_As_SilkClass"));
        Smooth_As_SilkClass->resize(600, 400);
        menuBar = new QMenuBar(Smooth_As_SilkClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Smooth_As_SilkClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Smooth_As_SilkClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Smooth_As_SilkClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Smooth_As_SilkClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Smooth_As_SilkClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Smooth_As_SilkClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Smooth_As_SilkClass->setStatusBar(statusBar);

        retranslateUi(Smooth_As_SilkClass);

        QMetaObject::connectSlotsByName(Smooth_As_SilkClass);
    } // setupUi

    void retranslateUi(QMainWindow *Smooth_As_SilkClass)
    {
        Smooth_As_SilkClass->setWindowTitle(QApplication::translate("Smooth_As_SilkClass", "Smooth_As_Silk", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Smooth_As_SilkClass: public Ui_Smooth_As_SilkClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMOOTH_AS_SILK_H
