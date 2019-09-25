#ifndef SALARIO_H
#define SALARIO_H


class Salario
{
public:
    Salario();
    virtual ~Salario();
    virtual double calcular()=0;
};

#endif // SALARIO_H
