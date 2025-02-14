#ifndef INTFACULTE_H
#define INTFACULTE_H

#include <QWidget>

namespace Ui {
class IntFaculte;
}

class IntFaculte : public QWidget
{
    Q_OBJECT

public:
    explicit IntFaculte(QWidget *parent = nullptr);
    ~IntFaculte();

private:
    Ui::IntFaculte *ui;
};

#endif // INTFACULTE_H
