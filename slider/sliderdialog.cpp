
#include "sliderdialog.h"

sliderDialog::sliderDialog(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);

}


void sliderDialog::calculate()
{
    int n1 = spinBox->value();
    int n2 = spinBox_2->value();
    int result;

    if (radioButtonadd->isChecked())
    {
        result = n1 + n2 ;
    }
    else
        if (radioButtonminus->isChecked())
        {
            result = n1 - n2;
        }

    lcdNumber->display(result);
}

void sliderDialog::on_spinBox_valueChanged(int arg1)
{
    (void)arg1;
    calculate();
}

void sliderDialog::on_spinBox_2_valueChanged(int arg1)
{
    (void)arg1;
    calculate();
}


void sliderDialog::resistorcalculate()
{
    int ring1 = comboBox->currentIndex();
    int ring2 = comboBox_2->currentIndex();
    int ring3 = comboBox_3->currentIndex();

    int result1 ;

    result1 = ((ring1*10)+(ring2))*ring3;

     label_8->setNum(result1);

}

void sliderDialog::on_comboBox_currentIndexChanged(int index)
{
    resistorcalculate();
}

void sliderDialog::on_comboBox_2_currentIndexChanged(int index)
{
    resistorcalculate();
}

void sliderDialog::on_comboBox_3_currentIndexChanged(int index)
{
    resistorcalculate();
}
