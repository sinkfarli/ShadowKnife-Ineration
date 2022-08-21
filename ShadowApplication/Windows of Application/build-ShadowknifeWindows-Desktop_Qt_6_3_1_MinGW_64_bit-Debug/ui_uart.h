/********************************************************************************
** Form generated from reading UI file 'uart.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UART_H
#define UI_UART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UART
{
public:

    void setupUi(QWidget *UART)
    {
        if (UART->objectName().isEmpty())
            UART->setObjectName(QString::fromUtf8("UART"));
        UART->resize(400, 300);

        retranslateUi(UART);

        QMetaObject::connectSlotsByName(UART);
    } // setupUi

    void retranslateUi(QWidget *UART)
    {
        UART->setWindowTitle(QCoreApplication::translate("UART", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UART: public Ui_UART {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UART_H
