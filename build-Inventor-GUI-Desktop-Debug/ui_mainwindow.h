/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QGroupBox *cajaGroupBox;
    QLabel *cajaLabel;
    QLineEdit *cajaLongitud;
    QGroupBox *malaGroupBox;
    QLabel *mallaLabel;
    QLineEdit *mallaDivisiones;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(272, 192);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 221, 16));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        cajaGroupBox = new QGroupBox(centralWidget);
        cajaGroupBox->setObjectName(QStringLiteral("cajaGroupBox"));
        cajaGroupBox->setGeometry(QRect(10, 60, 121, 81));
        cajaLabel = new QLabel(cajaGroupBox);
        cajaLabel->setObjectName(QStringLiteral("cajaLabel"));
        cajaLabel->setGeometry(QRect(10, 30, 101, 16));
        cajaLongitud = new QLineEdit(cajaGroupBox);
        cajaLongitud->setObjectName(QStringLiteral("cajaLongitud"));
        cajaLongitud->setGeometry(QRect(10, 50, 91, 21));
        malaGroupBox = new QGroupBox(centralWidget);
        malaGroupBox->setObjectName(QStringLiteral("malaGroupBox"));
        malaGroupBox->setGeometry(QRect(150, 60, 111, 81));
        mallaLabel = new QLabel(malaGroupBox);
        mallaLabel->setObjectName(QStringLiteral("mallaLabel"));
        mallaLabel->setGeometry(QRect(10, 30, 91, 16));
        mallaDivisiones = new QLineEdit(malaGroupBox);
        mallaDivisiones->setObjectName(QStringLiteral("mallaDivisiones"));
        mallaDivisiones->setGeometry(QRect(10, 50, 91, 21));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 160, 80, 22));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "Dimensiones Iniciales", 0));
        cajaGroupBox->setTitle(QApplication::translate("MainWindow", "Cubo:", 0));
        cajaLabel->setText(QApplication::translate("MainWindow", "Longitud:", 0));
        malaGroupBox->setTitle(QApplication::translate("MainWindow", "Malla:", 0));
        mallaLabel->setText(QApplication::translate("MainWindow", "Divisiones:", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Continuar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
