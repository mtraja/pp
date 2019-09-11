#ifndef ARQUIVO_H
#define ARQUIVO_H
#include <iostream>
#include <list>

using namespace std;

class Arquivo
{
public:
    Arquivo(string);
    virtual ~Arquivo();
    virtual void abrir();
    virtual void fechar();
    virtual const list<string> lerLinhas() = 0;
    virtual void salvarLinhas(const list<string>&) = 0;
    virtual void iniciar() = 0;
    string getNomeArquivo();
private:
    string m_nome;
};

#endif // ARQUIVO_H
