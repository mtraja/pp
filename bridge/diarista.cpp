#include "diarista.h"
#include "salario_diarista.h"

Diarista::Diarista(string cpf, string nome)
:Empregado(cpf,nome)
{
   this->setSalario(SalarioDiarista::makeInstance());
}


Diarista::~Diarista() {

}

double Diarista::obterSalario()
{
    return getSalarioDiaria()->calcularSalario();
}

void Diarista::definirSalario(double salario)
{
    getSalarioDiaria()->alterarSalario(salario);
}

void Diarista::definirDiasTrabalhado(int dias)
{
    this->getSalarioDiaria()->registrarDiasTrabalhado(dias);
}

SalarioDiarista *Diarista::getSalarioDiaria()
{
    SalarioDiarista* diarista = dynamic_cast<SalarioDiarista*>(getSalario());
    return diarista;

}
