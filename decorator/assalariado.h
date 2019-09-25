#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "salario.h"


class Assalariado : public Salario
{
public:
    Assalariado(double);
    double calcular() override;


private:
    double m_valorSal;
};

#endif // ASSALARIADO_H
