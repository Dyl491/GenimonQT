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
    void showEvent(QShowEvent *event);
    void closeEvent(QCloseEvent *event);

private:
    Ui::MainWindow *ui;
    SerialCommunication *serialComm;    //Communication Arduino
    QTimer *timer;

    Regle *regle;
    Commande *commande;

    QList<QLabel*> buttons;

    void startGame();
    void menuCommande();
    void menuRegle();
    void quitter();

    bool Clavier1 =0;
    bool Clavier2 =0;
    bool Clavier3 =0;
    bool Clavier4 =0;
};
#endif // MAINWINDOW_H
