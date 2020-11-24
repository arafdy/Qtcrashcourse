#ifndef SHAPEDIALOG_H
#define SHAPEDIALOG_H

#include "ui_shapedialog.h"

class shapedialog : public QDialog, private Ui::shapedialog
{
    Q_OBJECT

public:
    explicit shapedialog(QWidget *parent = nullptr);
private slots:

};

#endif // SHAPEDIALOG_H
