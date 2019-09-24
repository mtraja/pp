#ifndef NOTAFINAL_H
#define NOTAFINAL_H
#include <iostream>
#include "nota.h"
using namespace std;

class NotaFinal : public Nota
{
public:
    NotaFinal(string descricao);
    ~NotaFinal() override;

    void limpar();
    //void add(Nota* n) override;
    //void remove(Nota* n) override;
    //Nota* getNota(int indice) override;
    double calcular() const override;
    
};


#endif // NOTAFINAL_H
