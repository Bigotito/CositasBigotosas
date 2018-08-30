/********************************************************************************
** Form generated from reading UI file 'opciones.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPCIONES_H
#define UI_OPCIONES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_opciones
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *opciones)
    {
        if (opciones->objectName().isEmpty())
            opciones->setObjectName(QStringLiteral("opciones"));
        opciones->resize(178, 355);
        opciones->setStyleSheet(QStringLiteral("background: black"));
        pushButton = new QPushButton(opciones);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 180, 89, 25));
        pushButton->setStyleSheet(QStringLiteral("background: white"));

        retranslateUi(opciones);

        QMetaObject::connectSlotsByName(opciones);
    } // setupUi

    void retranslateUi(QWidget *opciones)
    {
        opciones->setWindowTitle(QApplication::translate("opciones", "Form", nullptr));
        pushButton->setText(QApplication::translate("opciones", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class opciones: public Ui_opciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPCIONES_H
