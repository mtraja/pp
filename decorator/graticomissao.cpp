#include "graticomissao.h"


GratiComissao::GratiComissao(Salario *salario)
    :Gratificacao(salario)
{
    m_comissao = 700.0;
}

double GratiComissao::calcular()
{
    double sal = Gratificacao::calcular();
    sal += m_comissao;
    return sal;
}

void GratiComissao::setComissao(double comissao)
{
    m_comissao = comissao;
}

double GratiComissao::getComissao()
{
    return m_comissao;
}
