#ifndef NETWORKDIALOG_H
#define NETWORKDIALOG_H

#include "ui_networkdialog.h"

class networkDialog : public QDialog, private Ui::networkDialog
{
    Q_OBJECT

public:
    explicit networkDialog(QWidget *parent = nullptr);
private slots:
    void on_pushButton_clicked();
};

#endif // NETWORKDIALOG_H
