#include "mainwindow.h"
#include <QApplication>
#include <QtCore>
#include <QPixmap>
#include <QSplashScreen>
#include <QWidget>
#include <QMainWindow>
#include <QTimer>
#include <QThread>

class I : public QThread
{
public:
        static void sleep(unsigned long secs) {
                QThread::sleep(secs);
        }
};


int main(int argc, char *argv[])
{
    static int const RESTART_CODE = 1000;
    int return_code = 0;

    do {
    QApplication a(argc, argv);

    QPixmap pixmap(":/images/splash.png"); //Insert your splash page image here
    QSplashScreen splash(pixmap);
    splash.show();

    splash.showMessage(QObject::tr("Checking for the latest update...\n\n\n\n\n\n"),Qt::AlignCenter | Qt::AlignBottom, Qt::black);  //This line represents the alignment of text, color and position
    I::sleep(2);
    MainWindow w;
    w.show();

    splash.finish(&w);
    splash.raise();

    return_code = a.exec();

   } while( return_code == RESTART_CODE);

   return return_code;
}
