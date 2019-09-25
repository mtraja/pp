#include "assalariado.h"

Assalariado::Assalariado(double sal)
    :Salario(), m_valorSal(sal)
{

}

double Assalariado::calcular()
{
    return m_valorSal;
}

