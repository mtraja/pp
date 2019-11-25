#include <QCoreApplication>
#include "executormusica.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExecutorMusica *executor = new ExecutorMusica();

    executor->tocar();

    executor->proxima();

    executor->parar();

    executor->anterior();

    executor->tocar();

    return a.exec();
}
