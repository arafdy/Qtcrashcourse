#ifndef COLORDIALOG_H
#define COLORDIALOG_H

#include "ui_colordialog.h"

class colorDialog : public QDialog, private Ui::colorDialog
{
    Q_OBJECT

public:
    explicit colorDialog(QWidget *parent = nullptr);
private slots:
    void on_colorselect_currentIndexChanged(const QString &arg1);
};

#endif // COLORDIALOG_H
