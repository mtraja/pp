#include "salario_comissionado.h"

SalarioComissionado::SalarioComissionado()
{

}

SalarioComissionado::~SalarioComissionado()
{

}

double SalarioComissionado::calcularSalario()
{
    double salario = this->m_comissao;
    salario += this->Salario::calcularSalario();
    return salario;
}

void SalarioComissionado::alterarSalario(double salario)
{
    Salario::alterarSalario(salario);
}

void SalarioComissionado::registrarComssao(double comissao)
{
    m_comissao = comissao;
}

double SalarioComissionado::obterComissao()
{
    return m_comissao;
}

SalarioComissionado *SalarioComissionado::makeInstance()
{
    return new SalarioComissionado();
}

