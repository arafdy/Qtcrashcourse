/********************************************************************************
** Form generated from reading UI file 'entrydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRYDIALOG_H
#define UI_ENTRYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_entryDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineNama;
    QLineEdit *lineNim;
    QLineEdit *lineTelp;
    QLineEdit *lineEmail;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *entryDialog)
    {
        if (entryDialog->objectName().isEmpty())
            entryDialog->setObjectName(QStringLiteral("entryDialog"));
        entryDialog->resize(213, 147);
        label = new QLabel(entryDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 29, 16));
        label_2 = new QLabel(entryDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 36, 22, 16));
        label_3 = new QLabel(entryDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 62, 23, 16));
        label_4 = new QLabel(entryDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 88, 31, 16));
        lineNama = new QLineEdit(entryDialog);
        lineNama->setObjectName(QStringLiteral("lineNama"));
        lineNama->setGeometry(QRect(47, 10, 133, 20));
        lineNim = new QLineEdit(entryDialog);
        lineNim->setObjectName(QStringLiteral("lineNim"));
        lineNim->setGeometry(QRect(47, 36, 133, 20));
        lineTelp = new QLineEdit(entryDialog);
        lineTelp->setObjectName(QStringLiteral("lineTelp"));
        lineTelp->setGeometry(QRect(47, 62, 133, 20));
        lineEmail = new QLineEdit(entryDialog);
        lineEmail->setObjectName(QStringLiteral("lineEmail"));
        lineEmail->setGeometry(QRect(47, 88, 133, 20));
        pushButton = new QPushButton(entryDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(21, 121, 75, 23));
        pushButton_2 = new QPushButton(entryDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(102, 121, 75, 23));

        retranslateUi(entryDialog);
        QObject::connect(pushButton_2, SIGNAL(clicked()), entryDialog, SLOT(reject()));
        QObject::connect(pushButton, SIGNAL(clicked()), entryDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(entryDialog);
    } // setupUi

    void retranslateUi(QDialog *entryDialog)
    {
        entryDialog->setWindowTitle(QApplication::translate("entryDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("entryDialog", "nama ", nullptr));
        label_2->setText(QApplication::translate("entryDialog", "NIM ", nullptr));
        label_3->setText(QApplication::translate("entryDialog", "TELP", nullptr));
        label_4->setText(QApplication::translate("entryDialog", "email", nullptr));
        pushButton->setText(QApplication::translate("entryDialog", "add", nullptr));
        pushButton_2->setText(QApplication::translate("entryDialog", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class entryDialog: public Ui_entryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRYDIALOG_H
