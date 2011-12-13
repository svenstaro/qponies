#include "pony.hpp"

Pony::Pony(QWidget *parent) :
    QMainWindow(parent)
{
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setAttribute(Qt::WA_TransparentForMouseEvents);
    this->setAttribute(Qt::WA_NoMousePropagation);
    this->setAttribute(Qt::WA_NoBackground);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setWindowFlags(Qt::X11BypassWindowManagerHint);
    this->setFocusPolicy(Qt::NoFocus);
}

void Pony::movelol() {
    this->move(this->pos().x()+1,
               this->pos().y()+1);
}
