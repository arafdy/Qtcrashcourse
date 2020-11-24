#include "recvudpdialog.h"
#include <QUdpSocket>

recvUdpDialog::recvUdpDialog(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
    connect(&m_udp, SIGNAL(readyRead()), this, SLOT(OnUdpRecv()));
        m_udp.bind(1234);

}

void recvUdpDialog::OnUdpRecv()
{
    QByteArray ba;
    QHostAddress from;


        while (m_udp.hasPendingDatagrams())
        {
            ba.resize(m_udp.pendingDatagramSize());
            m_udp.readDatagram(ba.data(), ba.size(), &from);
            qDebug("Recv from %s -> %s", qPrintable(from.toString()), ba.data());
        }
}
