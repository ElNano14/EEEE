#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Settings = new QSettings("Ozo i bartek", "clicker");
    licznik =0;
    rekord = Settings->value("Licznik/rekord",0).toInt();
    ui->label_3->setText(QString::number(rekord));
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

    if(rekord< licznik){
        rekord=licznik;
        Settings->setValue("Licznik/rekord", rekord);
        ui->label_3->setText(QString::number(rekord));
    }
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

