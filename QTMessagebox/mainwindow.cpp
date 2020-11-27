#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    // void about
    //void aboutQT
    // standardButton critical
    // StandardButton information
    // StandardButton Question
   // StandardButton Warning
    QMessageBox::question(this, "My Title", "This is my message");
}
