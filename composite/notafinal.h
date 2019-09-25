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
    double calcular() const override;
    
};


#endif // NOTAFINAL_H
