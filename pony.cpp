#include "pony.hpp"

Pony::Pony(QWidget* parent)
    : QMainWindow(parent)
{
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlags(Qt::FramelessWindowHint);
#ifdef Q_WS_X11
    this->setWindowFlags(Qt::X11BypassWindowManagerHint);
#endif
}

void Pony::movelol()
{
    this->move(this->pos().x() + 1,
        this->pos().y() + 1);
}
