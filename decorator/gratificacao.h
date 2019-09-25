#ifndef GRATIFICACAO_H
#define GRATIFICACAO_H
#include "salario.h"

class Gratificacao : public Salario
{
public:
    Gratificacao(Salario*);
    double calcular() override;

    Salario *getSalario();

private:
   Salario* m_salario;
};

#endif // GRATIFICACAO_H
