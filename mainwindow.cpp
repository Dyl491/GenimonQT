#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //mettre 1 si test et 0 si en parti normal
    if (1==1){
        ui->Capture->setVisible(true);
        ui->Combat->setVisible(true);
        ui->Genidex->setVisible(true);
        ui->Historencontre->setVisible(true);
        ui->Pause->setVisible(true);
    }else{
        ui->Capture->setVisible(false);
        ui->Combat->setVisible(false);
        ui->Genidex->setVisible(false);
        ui->Historencontre->setVisible(false);
        ui->Pause->setVisible(false);
    }
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


void MainWindow::on_Commande_clicked(bool checked)
{
    commande = new Commande(this);
    commande->show();
}


void MainWindow::on_Capture_clicked(bool checked)
{
    capture = new Capture(this);
    capture->show();
}


void MainWindow::on_Combat_clicked(bool checked)
{
    combat = new Combat(this);
    combat->show();
}


void MainWindow::on_Genidex_clicked(bool checked)
{
    genidex = new Genidex(this);
    genidex->show();
}


void MainWindow::on_Historencontre_clicked(bool checked)
{
    historencontre = new HistoRencontre(this);
    historencontre->show();
}


void MainWindow::on_Pause_clicked(bool checked)
{
    pause = new Pause(this);
    pause->show();
}

