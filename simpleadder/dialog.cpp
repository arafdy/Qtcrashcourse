#include "dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
}

void Dialog::on_pushhasil_clicked()
{
    QString kiri1 = kiri->text();
    QString kanan1 = kanan->text();

    float total = kiri1.toFloat() + kanan1.toFloat() ;
    lineEdit->setText(QString::number(total));
}
