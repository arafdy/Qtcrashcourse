#ifndef SHAPECHANGINGDIALOG_H
#define SHAPECHANGINGDIALOG_H

#include "ui_shapechangingdialog.h"

class ShapeChangingDialog : public QDialog, public Ui::ShapeChangingDialog
{
    Q_OBJECT

public:
    explicit ShapeChangingDialog(QWidget *parent = 0);
};

#endif // SHAPECHANGINGDIALOG_H
