#include <iostream>
#include <QTextStream>
#include "arquivoqt.h"

ArquivoQt::ArquivoQt(string nome)
:Arquivo(nome) {
    this->qf = new QFile(QString::fromStdString(nome));
    this->abrir();
    this->qts = new QTextStream(qf);
}

ArquivoQt::~ArquivoQt()
{
    delete qts;
    delete qf;
}

void ArquivoQt::abrir() {
    if( !qf->open(QIODevice::ReadWrite | QIODevice::Text) ) {
       std::cout << "Falhou para abrir." << std::endl;
    }
}

const list<string> ArquivoQt::lerLinhas() {
    qts->seek(0);
    QString linha;
    list<string> linhas;
    while (!qts->atEnd()) {
        linha = qts->readLine();
        linhas.push_back(linha.toStdString());
    }
    return linhas;
}

void ArquivoQt::salvarLinhas(const list<string>& linhas) {
    for(auto linha:linhas)
         *qts << QString::fromStdString(linha) << "\n";
}

void ArquivoQt::fechar() {
    qf->close();

}

void ArquivoQt::iniciar(){

}
