#ifndef ENTRYDATADIALOG_H
#define ENTRYDATADIALOG_H

#include "ui_entrydatadialog.h"

class EntryDataDialog : public QDialog, public Ui::EntryDataDialog
{
    Q_OBJECT

public:
    explicit EntryDataDialog(QWidget *parent = 0);
};

#endif // ENTRYDATADIALOG_H
