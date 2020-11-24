#include <QMessageBox>
#include "simpledataentrywindow.h"
#include "entrydatadialog.h"
#include <QShortcut>
#define ITEM_NIM 0
#define ITEM_NAME 1
#define ITEM_EMAIL 2
#define ITEM_TELP 3

SimpleDataEntryWindow::SimpleDataEntryWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setupUi(this);
    tableWidget->setColumnCount(4);
    QStringList headers;
    headers << "Nim" << "Nama" << "Email" << "Telp";
    tableWidget->setHorizontalHeaderLabels(headers);
    tableWidget->horizontalHeader()->setStretchLastSection(true);
    tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(tableWidget, SIGNAL(customContextMenuRequested(QPoint)),
            SLOT(customMenuRequested(QPoint)));
}

void SimpleDataEntryWindow::on_action_Quit_triggered()
{
    if (QMessageBox::question(this, "Quit Confirmation",
                              "Are you sure to quit",
                              QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        close();
    }
}

void SimpleDataEntryWindow::addRecord(int nRowCount, const QString& nim,
                                      const QString& name, const QString& email, const QString& telp)
{
    tableWidget->setItem(nRowCount, ITEM_NIM, new QTableWidgetItem(nim));
    tableWidget->setItem(nRowCount, ITEM_NAME, new QTableWidgetItem(name));
    tableWidget->setItem(nRowCount, ITEM_TELP, new QTableWidgetItem(telp));
    tableWidget->setItem(nRowCount, ITEM_EMAIL, new QTableWidgetItem(email));
}

void SimpleDataEntryWindow::customMenuRequested(QPoint pos)
{
    QMenu *menu=new QMenu(this);
    QAction *AddMenu = new QAction("Add", this);
    QAction *DeleteMenu = new QAction("Delete", this);
    connect(AddMenu, SIGNAL(triggered()), this, SLOT(on_action_Add_triggered()) );
    connect(DeleteMenu, SIGNAL(triggered()), this, SLOT(on_action_Delete_triggered()) );
    menu->addAction(AddMenu);
    menu->addAction(DeleteMenu);
    menu->popup(tableWidget->viewport()->mapToGlobal(pos));

}

void SimpleDataEntryWindow::on_action_Add_triggered()
{
    EntryDataDialog dlg;

    if (dlg.exec()==QDialog::Accepted)
    {
        int nRowCount = tableWidget->rowCount();
        tableWidget->setRowCount(nRowCount+1);
        addRecord(nRowCount, dlg.lineEditNim->text(),
                  dlg.lineEditNama->text(),
                  dlg.lineEditTelp->text(),
                  dlg.lineEditEmail->text());
        //        addRecord(nRowCount, "123", "Andi", "0818123123", "andi@gmail.com");
    }
}

void SimpleDataEntryWindow::on_action_Delete_triggered()
{
    int nRow= tableWidget->currentRow();
    if (nRow>=0)
        tableWidget->removeRow(nRow);
}
