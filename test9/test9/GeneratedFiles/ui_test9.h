/********************************************************************************
** Form generated from reading UI file 'test9.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST9_H
#define UI_TEST9_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test9Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test9Class)
    {
        if (test9Class->objectName().isEmpty())
            test9Class->setObjectName(QStringLiteral("test9Class"));
        test9Class->resize(600, 400);
        menuBar = new QMenuBar(test9Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        test9Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test9Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test9Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(test9Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        test9Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(test9Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test9Class->setStatusBar(statusBar);

        retranslateUi(test9Class);

        QMetaObject::connectSlotsByName(test9Class);
    } // setupUi

    void retranslateUi(QMainWindow *test9Class)
    {
        test9Class->setWindowTitle(QApplication::translate("test9Class", "test9", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class test9Class: public Ui_test9Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST9_H
