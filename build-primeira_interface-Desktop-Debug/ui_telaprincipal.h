/********************************************************************************
** Form generated from reading UI file 'telaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAPRINCIPAL_H
#define UI_TELAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaPrincipal
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TelaPrincipal)
    {
        if (TelaPrincipal->objectName().isEmpty())
            TelaPrincipal->setObjectName(QStringLiteral("TelaPrincipal"));
        TelaPrincipal->resize(400, 300);
        menuBar = new QMenuBar(TelaPrincipal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        TelaPrincipal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TelaPrincipal);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TelaPrincipal->addToolBar(mainToolBar);
        centralWidget = new QWidget(TelaPrincipal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        TelaPrincipal->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TelaPrincipal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TelaPrincipal->setStatusBar(statusBar);

        retranslateUi(TelaPrincipal);

        QMetaObject::connectSlotsByName(TelaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *TelaPrincipal)
    {
        TelaPrincipal->setWindowTitle(QApplication::translate("TelaPrincipal", "TelaPrincipal", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TelaPrincipal: public Ui_TelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAPRINCIPAL_H
