#include "comissionado.h"
#include "salario_comissionado.h"

Comissionado::Comissionado(string cpf, string nome)
:Empregado(cpf, nome)
{
    this->setSalario(SalarioComissionado::makeInstance());
}

Comissionado::~Comissionado()
{

}

double Comissionado::obterSalario()
{
    double salario = this->getSalarioComissionado()->calcularSalario();
    return salario;
}

void Comissionado::definirComissao(double comissao)
{
    this->getSalarioComissionado()->registrarComssao(comissao);
}

SalarioComissionado *Comissionado::getSalarioComissionado()
{
    SalarioComissionado* comissionado = dynamic_cast<SalarioComissionado*>(getSalario());
    return comissionado;

}


void Comissionado::definirSalario(double salario)
{
    this->getSalario()->alterarSalario(salario);
}
