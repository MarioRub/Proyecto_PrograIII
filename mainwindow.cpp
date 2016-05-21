#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qmessagebox.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

int MainWindow::funcionAllanV()
{
   return 10;
}

int MainWindow::funcionFactorial()
{
    return 20;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_botonAceptar_clicked()
{
    QMessageBox mensaje;
    mensaje.setText("Hola mundo");
    mensaje.exec();
}
