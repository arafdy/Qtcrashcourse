#include "shapedialog.h"

shapedialog::shapedialog(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
    groupBox2->hide();
    groupBox3->hide();
    layout()->setSizeConstraint(QLayout::SetFixedSize);
}

