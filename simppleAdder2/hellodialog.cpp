#include "hellodialog.h"

helloDialog::helloDialog(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
    comboBoxOpr->addItem("+",QChar('+'));
    comboBoxOpr->addItem("-",QChar('-'));
    comboBoxOpr->addItem("*",QChar('*'));
    comboBoxOpr->addItem("/",QChar('/'));
}

void helloDialog::on_pushButton_clicked()
{
    int n1 = lineEditnumber1->text().toInt();
    int n2 = spinBoxnumber2->value();
    int sum = 0;


    QString str = comboBoxOpr->currentText();
    int idx = comboBoxOpr->currentIndex();

    char ch = comboBoxOpr->itemData(idx).toChar().toLatin1();
    /*
    if(str=="+")
        sum = n1 + n2;
    else
        if(str=="-")
            sum = n1 - n2;
    else
        if(str=="*")
            sum = n1 * n2;
    else
        if(str=="/")
            sum = n1 / n2;
*/

    switch (ch) {
    case '+':
        sum = n1 + n2 ;
        break;
    case '-':
        sum = n1 - n2 ;
        break;
    case '*':
        sum = n1 * n2 ;
        break;
    case '/':
        sum = n1 / n2 ;
        break;

    }

    label4hasil->setNum(sum);
}
