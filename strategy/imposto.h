#ifndef  IMPOSTO_H
#define IMPOSTO_H

class Empregado;

class CalculoImposto {
public:
    CalculoImposto() {

    }

    virtual double calculoSalario(Empregado *) = 0;
};

#endif