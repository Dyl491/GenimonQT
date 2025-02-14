#include "mainwindow.h"
#include "./ui_mainwindow.h"

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



void MainWindow::on_Quitter_clicked(bool checked)
{
    QApplication::quit();
}


void MainWindow::on_Start_clicked(bool checked)
{
    choixJoueur = new ChoixJoueur(this);
    choixJoueur->show();
}


void MainWindow::on_Regle_clicked(bool checked)
{
    regle = new Regle(this);
    regle->show();
}

