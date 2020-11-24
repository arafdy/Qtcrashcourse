#include "shapechangingdialog.h"

ShapeChangingDialog::ShapeChangingDialog(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
    groupBoxSecond->hide();
    groupBoxTertiary->hide();
    layout()->setSizeConstraint(QLayout::SetFixedSize);
}
