#include "stackeddialog.h"

stackedDialog::stackedDialog(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
    stackedWidget->setCurrentIndex(0);
}

void stackedDialog::on_pushButton_clicked()
{
    stackedWidget->setCurrentIndex(1);
}

void stackedDialog::on_pushButton_2_clicked()
{
    stackedWidget->setCurrentIndex(0);
}
