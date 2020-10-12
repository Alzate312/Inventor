#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../metodosPrincipales.cpp"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{


    if(ui->cajaLongitud->text().isEmpty() || ui->mallaDivisiones->text().isEmpty()){
        QMessageBox::information(this,"Warning", "Debes rellenar ambos campos");
    }else{

        principal(ui->cajaLongitud->text().toFloat(), ui->mallaDivisiones->text().toFloat());

    }

}
