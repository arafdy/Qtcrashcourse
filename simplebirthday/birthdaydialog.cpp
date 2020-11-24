#include "birthdaydialog.h"

birthdayDialog::birthdayDialog(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
    dateBirthday->setDate(QDate::currentDate());
}
