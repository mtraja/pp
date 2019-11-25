#ifndef EMPREGADO_H
#define EMPREGADO_H

#include "imposto.h"

class Empregado {
public:
    Empregado(int cargo, double salario);

    double calcularSalarioImposto();

    double getSalario();

    //static enum cargos {gerente, analista, programador};
    static const int GERENTE = 1;
    static const int ANALISTA = 2;
    static const int PROGRAMADOR = 3;
private:
    double m_salario;
    int m_cargo;
    CalculoImposto* m_imposto;

};

#endif