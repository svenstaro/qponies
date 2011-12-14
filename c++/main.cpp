#include <QtGui/QApplication>
#include <QtGui/QMovie>
#include <QtGui/QLabel>
#include <QGraphicsEffect>
#include <QTimer>
#include <QDebug>
#include "pony.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QCoreApplication::addLibraryPath(QCoreApplication::applicationDirPath());

    Pony* w = new Pony();

    QTimer timer;
    timer.setInterval(100);
    timer.start();

    QMovie* m = new QMovie(":/rbd");
    QLabel l(w);
    QLabel b(w);
    l.setMovie(m);
    b.setMovie(m);
    l.setGeometry(0, 0, 100, 100);
    b.setGeometry(0, 0, 100, 100);
    m->start();
    w->resize(m->currentImage().size());
    l.setGraphicsEffect(new QGraphicsBlurEffect());
    w->show();

    QObject::connect(&timer, SIGNAL(timeout()), w, SLOT(movelol()));

    return a.exec();
}
