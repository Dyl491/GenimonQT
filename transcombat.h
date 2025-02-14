#ifndef TRANSCOMBAT_H
#define TRANSCOMBAT_H

#include <QWidget>

namespace Ui {
class TransCombat;
}

class TransCombat : public QWidget
{
    Q_OBJECT

public:
    explicit TransCombat(QWidget *parent = nullptr);
    ~TransCombat();

private:
    Ui::TransCombat *ui;
};

#endif // TRANSCOMBAT_H
