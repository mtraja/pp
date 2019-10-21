#include <QCoreApplication>

#include <iostream>
#include <string>

#include <QDebug>
#include "repositorio.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Compilado com Qt Versao = " << QT_VERSION_STR;

    Repositorio* repo = new Repositorio();
    // inserir um aluno no repositorio
    //repo->persistir("Amanda Santana Ferreira","20191015030025", 6.4, 2);

    // recuperar um aluno de determinada matricula
    std::list<std::string> lista = repo->obterAluno("20191015030069");
    for(auto campo : lista)
        std::cout << campo << " ";
    std::cout << std::endl;


    delete repo;

    return a.exec();
}
