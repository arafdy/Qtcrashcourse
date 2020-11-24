/********************************************************************************
** Form generated from reading UI file 'simpledataentrywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLEDATAENTRYWINDOW_H
#define UI_SIMPLEDATAENTRYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimpleDataEntryWindow
{
public:
    QAction *action_New;
    QAction *action_Quit;
    QAction *action_Add;
    QAction *action_Delete;
    QAction *action_About;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menuEdit;
    QMenu *menu_Help;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SimpleDataEntryWindow)
    {
        if (SimpleDataEntryWindow->objectName().isEmpty())
            SimpleDataEntryWindow->setObjectName(QStringLiteral("SimpleDataEntryWindow"));
        SimpleDataEntryWindow->resize(481, 300);
        action_New = new QAction(SimpleDataEntryWindow);
        action_New->setObjectName(QStringLiteral("action_New"));
        action_Quit = new QAction(SimpleDataEntryWindow);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        action_Add = new QAction(SimpleDataEntryWindow);
        action_Add->setObjectName(QStringLiteral("action_Add"));
        action_Delete = new QAction(SimpleDataEntryWindow);
        action_Delete->setObjectName(QStringLiteral("action_Delete"));
        action_About = new QAction(SimpleDataEntryWindow);
        action_About->setObjectName(QStringLiteral("action_About"));
        centralWidget = new QWidget(SimpleDataEntryWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        SimpleDataEntryWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SimpleDataEntryWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 481, 19));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        SimpleDataEntryWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SimpleDataEntryWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SimpleDataEntryWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SimpleDataEntryWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SimpleDataEntryWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(action_New);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);
        menuEdit->addAction(action_Add);
        menuEdit->addAction(action_Delete);
        menu_Help->addAction(action_About);

        retranslateUi(SimpleDataEntryWindow);

        QMetaObject::connectSlotsByName(SimpleDataEntryWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SimpleDataEntryWindow)
    {
        SimpleDataEntryWindow->setWindowTitle(QApplication::translate("SimpleDataEntryWindow", "SimpleDataEntryWindow", nullptr));
        action_New->setText(QApplication::translate("SimpleDataEntryWindow", "&New...", nullptr));
        action_Quit->setText(QApplication::translate("SimpleDataEntryWindow", "&Quit", nullptr));
        action_Add->setText(QApplication::translate("SimpleDataEntryWindow", "&Add...", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Add->setShortcut(QApplication::translate("SimpleDataEntryWindow", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        action_Delete->setText(QApplication::translate("SimpleDataEntryWindow", "&Delete...", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Delete->setShortcut(QApplication::translate("SimpleDataEntryWindow", "Ctrl+D", nullptr));
#endif // QT_NO_SHORTCUT
        action_About->setText(QApplication::translate("SimpleDataEntryWindow", "A&bout...", nullptr));
#ifndef QT_NO_STATUSTIP
        action_About->setStatusTip(QApplication::translate("SimpleDataEntryWindow", "About program", nullptr));
#endif // QT_NO_STATUSTIP
        menu_File->setTitle(QApplication::translate("SimpleDataEntryWindow", "&File", nullptr));
        menuEdit->setTitle(QApplication::translate("SimpleDataEntryWindow", "&Edit", nullptr));
        menu_Help->setTitle(QApplication::translate("SimpleDataEntryWindow", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SimpleDataEntryWindow: public Ui_SimpleDataEntryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLEDATAENTRYWINDOW_H
