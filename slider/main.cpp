#include "sliderdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sliderDialog w;
    w.show();

    return a.exec();
}
