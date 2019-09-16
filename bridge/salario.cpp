#include "salario.h"
#include <iostream>

Salario::Salario()
{
    m_salario =0.0;
}

double Salario::calcularSalario() {
    return m_salario;
}

void Salario::alterarSalario(double salario) {
    m_salario = salario;
}


Salario::~Salario() {

}
