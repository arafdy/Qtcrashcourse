#include "networkdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    networkDialog w;
    w.show();

    return a.exec();
}
