#ifndef ENTRYDIALOG_H
#define ENTRYDIALOG_H

#include "ui_entrydialog.h"

class entryDialog : public QDialog, public Ui::entryDialog
{
    Q_OBJECT

public:
    explicit entryDialog(QWidget *parent = nullptr);
private slots:

};

#endif // ENTRYDIALOG_H
