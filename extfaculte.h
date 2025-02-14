#ifndef EXTFACULTE_H
#define EXTFACULTE_H

#include <QWidget>

namespace Ui {
class ExtFaculte;
}

class ExtFaculte : public QWidget
{
    Q_OBJECT

public:
    explicit ExtFaculte(QWidget *parent = nullptr);
    ~ExtFaculte();

private:
    Ui::ExtFaculte *ui;
};

#endif // EXTFACULTE_H
