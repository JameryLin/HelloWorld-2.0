#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDialog"
#include "QLabel"

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
    QDialog *dia=new QDialog;
    dia->setWindowTitle("New Dialog");
    dia->setFixedSize(200,100);
    QLabel *lable=new QLabel(dia);
    lable->setText("Go on!");
    dia->show();
}
