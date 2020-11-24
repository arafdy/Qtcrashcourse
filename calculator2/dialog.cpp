#include "dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
}



void Dialog::on_plusButton_clicked()
{
    QString atas1 = atas->text();
    QString bawah1 = bawah->text();

    float total = atas1.toFloat() + bawah1.toFloat() ;
    lineEdit_3->setText(QString::number(total));
}

void Dialog::on_minusButton_clicked()
{
    QString atas1 = atas->text();
    QString bawah1 = bawah->text();

    float total = atas1.toFloat() - bawah1.toFloat();
    lineEdit_3->setText(QString::number(total));
}

void Dialog::on_dividedButton_clicked()
{
    QString atas1 = atas->text();
    QString bawah1 = bawah->text();

    float total = atas1.toFloat() / bawah1.toFloat();
    lineEdit_3->setText(QString::number(total));
}

void Dialog::on_multiplyButton_clicked()
{
    QString atas1 = atas->text();
    QString bawah1 = bawah->text();

    float total = atas1.toFloat() * bawah1.toFloat();
    lineEdit_3->setText(QString::number(total));
}
