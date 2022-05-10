#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    licznik =0;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    close();
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->label->setText(QString::number(++licznik));
}


void MainWindow::on_actionZamknij_triggered()
{
    close();
}


void MainWindow::on_actionPomoc_triggered()
{
    QMessageBox::aboutQt(this, "E");
}


void MainWindow::on_actionPomoc_2_triggered()
{
    QMessageBox::information(this, "E", "MEGA POMOC EEEEEEEEEEE");
}

