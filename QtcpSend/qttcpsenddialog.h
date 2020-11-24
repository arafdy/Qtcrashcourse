#ifndef QTTCPSENDDIALOG_H
#define QTTCPSENDDIALOG_H

#include "ui_qttcpsenddialog.h"
#include <QTcpSocket>

class QtTcpSendDialog : public QDialog, private Ui::QtTcpSendDialog
{
    Q_OBJECT

    QTcpSocket m_tcp;


public:
    explicit QtTcpSendDialog(QWidget *parent = nullptr);
private slots:
    void on_pushButtonConnect_clicked();
    void on_pushButtonSend_clicked();

    void OnTcpConnected();
    void OnTcpDisonnected();
};

#endif // QTTCPSENDDIALOG_H
