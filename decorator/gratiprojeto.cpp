#include "gratiprojeto.h"

GratiProjeto::GratiProjeto(Salario* salario)
    :Gratificacao(salario)
{
    m_numeroPjt = 1;
    m_valorPjt = 550.0;
}

double GratiProjeto::calcular()
{
    double sal = Gratificacao::calcular();
    sal += m_numeroPjt * m_valorPjt;
    return sal;
}

void GratiProjeto::setNumeroProjeto(int np)
{
    m_numeroPjt =np;
}

int GratiProjeto::getNumeroProjeto()
{
    return m_numeroPjt;
}

void GratiProjeto::setValorProjeto(double vp)
{
    m_valorPjt = vp;
}

double GratiProjeto::getValorProjeto()
{
    return m_valorPjt;
}
