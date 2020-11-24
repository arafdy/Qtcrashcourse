#include "qttcpsenddialog.h"

QtTcpSendDialog::QtTcpSendDialog(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
}

void QtTcpSendDialog::on_pushButtonConnect_clicked()
{
    m_tcp.connectToHost(lineEditIPAddr->text(),
                            spinBoxPort->value());
}



void QtTcpSendDialog::on_pushButtonSend_clicked()
{
    QString str = lineEditData->text();
        m_tcp.write(str.toLatin1(), str.length());

}

void QtTcpSendDialog::OnTcpConnected()
{
   pushbut
}
