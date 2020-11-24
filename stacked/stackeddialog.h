#ifndef STACKEDDIALOG_H
#define STACKEDDIALOG_H

#include "ui_stackeddialog.h"

class stackedDialog : public QDialog, private Ui::stackedDialog
{
    Q_OBJECT

public:
    explicit stackedDialog(QWidget *parent = nullptr);
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // STACKEDDIALOG_H
