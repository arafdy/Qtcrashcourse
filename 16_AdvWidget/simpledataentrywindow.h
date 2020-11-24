#ifndef SIMPLEDATAENTRYWINDOW_H
#define SIMPLEDATAENTRYWINDOW_H

#include "ui_simpledataentrywindow.h"

class SimpleDataEntryWindow : public QMainWindow, private Ui::SimpleDataEntryWindow
{
    Q_OBJECT

public:
    explicit SimpleDataEntryWindow(QWidget *parent = 0);
protected:
    void addRecord(int nRowCount, const QString &nim,
                   const QString &name, const QString &email,
                   const QString &telp);

private slots:
    void on_action_Quit_triggered();
    void on_action_Add_triggered();
    void on_action_Delete_triggered();
    void customMenuRequested(QPoint pos);
};

#endif // SIMPLEDATAENTRYWINDOW_H
