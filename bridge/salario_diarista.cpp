#include "salario_diarista.h"

SalarioDiarista::SalarioDiarista()
{
    valorDiaria=120.0;
    diasTrabalhado = 0;
}

double SalarioDiarista::calcularSalario() {
    double salario = diasTrabalhado * valorDiaria;
    salario += Salario::calcularSalario();

    return salario;
}

void SalarioDiarista::alterarSalario(double salario)
{
    Salario::alterarSalario(salario);
}

SalarioDiarista * SalarioDiarista::makeInstance() {
    return new SalarioDiarista();
}

void SalarioDiarista::alterarValorDiaria(double valor) {
   valorDiaria = valor;
}

void SalarioDiarista::registrarDiasTrabalhado(int dias) {
    diasTrabalhado = dias;
}

int SalarioDiarista::obterDiasTrabalhado()
{
    return diasTrabalhado;
}

SalarioDiarista::~SalarioDiarista() {

}
