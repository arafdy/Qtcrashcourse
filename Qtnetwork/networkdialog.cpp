#include "networkdialog.h"
#include <QUdpSocket>

networkDialog::networkDialog(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
}

void networkDialog::on_pushButton_clicked()
{
    QUdpSocket udp;
        QString dataToSend = lineEditDataToSend->text();
        QHostAddress addr;
        addr.setAddress(lineEditIPAddress->text());
        udp.writeDatagram(dataToSend.toLatin1(),
                          dataToSend.length(),
                          addr, spinBox->value());

}
