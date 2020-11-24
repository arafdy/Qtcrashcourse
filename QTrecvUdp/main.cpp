#include "recvudpdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    recvUdpDialog w;
    w.show();

    return a.exec();
}
