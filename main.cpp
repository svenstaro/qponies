#include <QtGui/QApplication>
#include "qmlapplicationviewer.h"

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QScopedPointer<QApplication> app(createApplication(argc, argv));
    QScopedPointer<QmlApplicationViewer> viewer(QmlApplicationViewer::create());

    // Compare performance here
    //QApplication::setGraphicsSystem("raster");
    //QApplication::setGraphicsSystem("opengl");

    viewer->setOrientation(QmlApplicationViewer::ScreenOrientationAuto);
    viewer->setMainQmlFile(QString("qrc:/qml/qponies/main.qml"));
    viewer->showExpanded();

    return app->exec();
}
