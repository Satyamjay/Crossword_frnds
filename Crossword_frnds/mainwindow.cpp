#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->MessageBox->setText("Press Enter after entering the alphabet");

}

MainWindow::~MainWindow()
{
    delete ui;
}

char square[100];

void MainWindow::on_L00_returnPressed()
{
    QString c = ui->L00->text();
    char d = QString(c).at(0).toLatin1();
    if(d>=65&&d<=90||d>=97&&d<=122)
    {
        square[0]=d;
        ui->MessageBox->setText("Alphabet succesfully entered");
        ui->L00->setReadOnly(true);
        ui->L00->setStyleSheet("QLineEdit { background: rgb(0, 255, 255);}");

    }
    else
    {
        ui->MessageBox->setText("Enter Alphabets Only");
        ui->L00->setText("");
    }
}



void MainWindow::on_L01_returnPressed()
{
    QString c = ui->L01->text();
    char d = QString(c).at(0).toLatin1();
    if((d>=65&&d<=90)||(d>=97&&d<=122))
    {
        square[1]=d;
        ui->MessageBox->setText("Alphabet succesfully entered");
        ui->L01->setReadOnly(true);
        ui->L01->setStyleSheet("QLineEdit { background: rgb(0, 255, 255);}");

    }
    else
    {
        ui->MessageBox->setText("Enter Alphabets Only");
        ui->L01->setText("");
    }
}









