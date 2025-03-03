#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QKeyEvent>
#include "regle.h"
#include "choixjoueur.h"
#include "commande.h"

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
    void main();
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);

private:
    Ui::MainWindow *ui;
    SerialCommunication *serialComm;    //Communication Arduino
    QTimer *timer;

    Regle *regle;
    Commande *commande;

    int selectedButtonIndex = 0;
    QList<QLabel*> buttons;
    void highlight();

    void startGame();
    void continuer();
    void menuCommande();
    void menuRegle();
    void quitter();


    bool ClavierW = false;
    bool ClavierS = false;
    bool ClavierEnter = false;

};
#endif // MAINWINDOW_H
