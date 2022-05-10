#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QSettings"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_actionZamknij_triggered();

    void on_actionPomoc_triggered();

    void on_actionPomoc_2_triggered();

private:
    Ui::MainWindow *ui;
    int licznik;
    QSettings *Settings;
    int rekord;
};
#endif // MAINWINDOW_H
