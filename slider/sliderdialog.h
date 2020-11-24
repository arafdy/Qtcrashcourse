#ifndef SLIDERDIALOG_H
#define SLIDERDIALOG_H

#include "ui_sliderdialog.h"

class sliderDialog : public QDialog, private Ui::sliderDialog
{
    Q_OBJECT

public:
    explicit sliderDialog(QWidget *parent = nullptr);
protected:
    void calculate();

    void resistorcalculate();

private slots:

    void on_spinBox_valueChanged(int arg1);
    void on_spinBox_2_valueChanged(int arg1);
    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);
    void on_comboBox_3_currentIndexChanged(int index);
};

#endif // SLIDERDIALOG_H
