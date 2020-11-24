#ifndef DIALOG_H
#define DIALOG_H

#include "ui_dialog.h"

class Dialog : public QDialog, private Ui::Dialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
private slots:
    void on_pushhasil_clicked();
};

#endif // DIALOG_H
