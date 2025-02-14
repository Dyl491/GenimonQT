#ifndef CHOIXGENIMON_H
#define CHOIXGENIMON_H

#include <QWidget>

namespace Ui {
class ChoixGenimon;
}

class ChoixGenimon : public QWidget
{
    Q_OBJECT

public:
    explicit ChoixGenimon(QWidget *parent = nullptr);
    ~ChoixGenimon();

private:
    Ui::ChoixGenimon *ui;
};

#endif // CHOIXGENIMON_H
