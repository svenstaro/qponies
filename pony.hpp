#ifndef PONY_HPP
#define PONY_HPP

#include <QtWidgets/QMainWindow>

class Pony : public QMainWindow {
    Q_OBJECT
public:
    explicit Pony(QWidget* parent = 0);

signals:

public slots:
    void movelol();
};

#endif // PONY_HPP
