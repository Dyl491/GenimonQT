#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "regle.h"
#include "choixjoueur.h"
#include "commande.h"
#include "capture.h"
#include "combat.h"
#include "genidex.h"
#include "historencontre.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Quitter_clicked(bool checked);

    void on_Start_clicked(bool checked);

    void on_Regle_clicked(bool checked);

    void on_Commande_clicked(bool checked);

    void on_Capture_clicked(bool checked);

    void on_Combat_clicked(bool checked);

    void on_Genidex_clicked(bool checked);

    void on_Historencontre_clicked(bool checked);

private:
    Ui::MainWindow *ui;
    Regle *regle;
    Commande *commande;

    //Pour test
    Capture *capture;
    Combat *combat;
    Genidex *genidex;
    HistoRencontre *historencontre;

};
#endif // MAINWINDOW_H
