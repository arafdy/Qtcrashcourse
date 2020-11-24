#ifndef RECVUDPDIALOG_H
#define RECVUDPDIALOG_H

#include "ui_recvudpdialog.h"
#include <QUdpSocket>


class recvUdpDialog : public QDialog, private Ui::recvUdpDialog
{
    Q_OBJECT
    QUdpSocket m_udp;

public:
    explicit recvUdpDialog(QWidget *parent = nullptr);

protected slots:
    void OnUdpRecv();
};

#endif // RECVUDPDIALOG_H
