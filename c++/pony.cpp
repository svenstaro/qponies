#include "pony.hpp"

Pony::Pony(QWidget *parent) :
    QMainWindow(parent)
{
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlags(Qt::FramelessWindowHint);
#if !defined(WIN32) || !defined(MACOSX)
    this->setWindowFlags(Qt::X11BypassWindowManagerHint);
#endif
}

void Pony::movelol() {
    this->move(this->pos().x()+1,
               this->pos().y()+1);
}
