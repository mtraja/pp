#include "gratificacao.h"

Gratificacao::Gratificacao(Salario* salario)
{
    m_salario = salario;
}

double Gratificacao::calcular()
{
  double sal = m_salario->calcular();
  return sal;
}

Salario *Gratificacao::getSalario()
{
    return m_salario;
}
