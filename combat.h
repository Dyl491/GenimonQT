#ifndef COMBAT_H
#define COMBAT_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class Combat;
}

class Combat : public QWidget
{
    Q_OBJECT

public:
    explicit Combat(QWidget *parent = nullptr);
    ~Combat();

private:
    Ui::Combat *ui;
    QTimer *TransTimer;

private slots:
    void onTimeout();
    void on_Attaque1_clicked(bool checked);
    void on_Attaque2_clicked(bool checked);
    void on_Attaque3_clicked(bool checked);
    void on_Attaque4_clicked(bool checked);
};

#endif // COMBAT_H
