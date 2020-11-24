#include <QMessageBox>
#include "mainwindow.h"
#include "shapechangingdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setupUi(this);
}

void MainWindow::on_actionExit_triggered()
{
    int ret = QMessageBox::question(this, "Simple MainWindow",
                      "Ciyus", QMessageBox::Ok |QMessageBox::Cancel);

    if (ret==QMessageBox::Ok)
        close();
//    else
//    {
//        QMessageBox::information(this, "Simple MainWindow",
//                                 "Batal ni yee");
//    }
}

void MainWindow::on_action_About_triggered()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Simple MainWindow");
    msgBox.setText("About");
    msgBox.setInformativeText("Simple MainWindow (c) 2018");
    msgBox.setStandardButtons(QMessageBox::Ok);

    QPixmap icon;
    icon.load(":/images/elephant.jpeg");
    msgBox.setIconPixmap(icon);
    msgBox.exec();
}

void MainWindow::on_action_Sort_triggered()
{
    ShapeChangingDialog dlg;
    dlg.comboBoxPrimaryKeyColumn->setCurrentIndex(1);

    if (dlg.exec()==QDialog::Accepted)
    {
        int nIdxKey = dlg.comboBoxPrimaryKeyColumn->currentIndex();
        int nOrder = dlg.comboBoxPrimaryKeyOrder->currentIndex();
        qDebug("PrimaryKey: %d -> %d", nIdxKey, nOrder);
    }
}
