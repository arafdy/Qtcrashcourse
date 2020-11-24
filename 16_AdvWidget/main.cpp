#include "simpledataentrywindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SimpleDataEntryWindow w;
    w.show();

    return a.exec();
}
