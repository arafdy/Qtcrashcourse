#ifndef DIALOG_H
#define DIALOG_H

#include "ui_dialog.h"

class Dialog : public QDialog, private Ui::Dialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
private slots:
    void on_pushButton_clicked();
    void on_plusButton_clicked();
    void on_minusButton_clicked();
    void on_dividedButton_clicked();
    void on_multiplyButton_clicked();
};

#endif // DIALOG_H
