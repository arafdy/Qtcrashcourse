#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"

class MainWindow : public QMainWindow, private Ui::MainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
private slots:
    void on_actionExit_triggered();
    void on_action_About_triggered();
    void on_action_Sort_triggered();
};

#endif // MAINWINDOW_H
