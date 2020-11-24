#ifndef BIRTHDAYDIALOG_H
#define BIRTHDAYDIALOG_H

#include "ui_birthdaydialog.h"

class birthdayDialog : public QDialog, private Ui::birthdayDialog
{
    Q_OBJECT

public:
    explicit birthdayDialog(QWidget *parent = nullptr);
};

#endif // BIRTHDAYDIALOG_H
