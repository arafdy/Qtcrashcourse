#include "qttcpsenddialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtTcpSendDialog w;
    w.show();

    return a.exec();
}
