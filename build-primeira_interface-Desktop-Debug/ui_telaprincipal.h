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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaPrincipal
{
public:
    QWidget *centralWidget;
    QToolButton *toolButton;
    QPushButton *pushButton;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QProgressBar *progressBar;
    QSlider *horizontalSlider;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TelaPrincipal)
    {
        if (TelaPrincipal->objectName().isEmpty())
            TelaPrincipal->setObjectName(QStringLiteral("TelaPrincipal"));
        TelaPrincipal->resize(400, 300);
        centralWidget = new QWidget(TelaPrincipal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(0, 210, 80, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 0, 131, 61));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 10, 241, 41));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 90, 181, 51));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximum(101);
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);

        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 210, 121, 31));
        TelaPrincipal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TelaPrincipal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        TelaPrincipal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TelaPrincipal);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TelaPrincipal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TelaPrincipal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TelaPrincipal->setStatusBar(statusBar);

        retranslateUi(TelaPrincipal);
        QObject::connect(toolButton, SIGNAL(clicked()), TelaPrincipal, SLOT(close()));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(TelaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *TelaPrincipal)
    {
        TelaPrincipal->setWindowTitle(QApplication::translate("TelaPrincipal", "TelaPrincipal", Q_NULLPTR));
        toolButton->setText(QApplication::translate("TelaPrincipal", "Sair", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TelaPrincipal", "Mostrar mensagem", Q_NULLPTR));
        label->setText(QApplication::translate("TelaPrincipal", "A mensagem ser\303\241 mostrada aqui.", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("TelaPrincipal", "Verificar vers\303\243o.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TelaPrincipal: public Ui_TelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAPRINCIPAL_H
