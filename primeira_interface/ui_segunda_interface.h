/********************************************************************************
** Form generated from reading UI file 'segunda_interface.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEGUNDA_INTERFACE_H
#define UI_SEGUNDA_INTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_segunda_interface
{
public:
    QLabel *label;

    void setupUi(QDialog *segunda_interface)
    {
        if (segunda_interface->objectName().isEmpty())
            segunda_interface->setObjectName(QString::fromUtf8("segunda_interface"));
        segunda_interface->resize(400, 300);
        label = new QLabel(segunda_interface);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(47, 85, 291, 111));

        retranslateUi(segunda_interface);

        QMetaObject::connectSlotsByName(segunda_interface);
    } // setupUi

    void retranslateUi(QDialog *segunda_interface)
    {
        segunda_interface->setWindowTitle(QApplication::translate("segunda_interface", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("segunda_interface", "Parab\303\251ns.... Voc\303\252 criou a segunda tela inutil.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class segunda_interface: public Ui_segunda_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEGUNDA_INTERFACE_H
