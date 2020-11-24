#ifndef HELLODIALOG_H
#define HELLODIALOG_H

#include "ui_hellodialog.h"

class helloDialog : public QDialog, private Ui::helloDialog
{
    Q_OBJECT

public:
    explicit helloDialog(QWidget *parent = nullptr);
private slots:
    void on_pushButton_clicked();
};

#endif // HELLODIALOG_H
