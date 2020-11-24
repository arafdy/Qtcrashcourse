#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString atas = ui->lineEdit->text();
    QString bawah = ui->lineEdit_2->text();
    float total = atas.toFloat() + bawah.toFloat();
    ui->label_2->setText(QString::number(total));
}

void MainWindow::on_pushButton_3_clicked()
{
    QString atas = ui->lineEdit->text();
    QString bawah = ui->lineEdit_2->text();
    float total = atas.toFloat()- bawah.toFloat();
    ui->label_2->setText(QString::number(total));
}

void MainWindow::on_pushButton_4_clicked()
{
    QString atas = ui->lineEdit->text();
    QString bawah = ui->lineEdit_2->text();
    float total = atas.toFloat() * bawah.toFloat();
    ui->label_2->setText(QString::number(total));
}

void MainWindow::on_pushButton_5_clicked()
{
    QString atas = ui->lineEdit->text();
    QString bawah = ui->lineEdit_2->text();
    float total = atas.toFloat() / bawah.toFloat();
    ui->label_2->setText(QString::number(total));
}
