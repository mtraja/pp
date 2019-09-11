#ifndef ARQUIVOQT_H
#define ARQUIVOQT_H
#include <QFile>
#include <QTextStream>
#include "arquivo.h"

class ArquivoQt : public Arquivo
{
public:
    ArquivoQt(string);
    ~ArquivoQt();
    void abrir();
    void fechar();
    const list<string> lerLinhas();
    void salvarLinhas(const list<string>&);
    void iniciar();
private:
    QFile* qf;
    QTextStream* qts;

};

#endif // ARQUIVOQT_H
