#ifndef SALARIODIARISTA_H
#define SALARIODIARISTA_H
#include "salario.h"

class SalarioDiarista : public Salario
{
public:

    ~SalarioDiarista() override;
    double calcularSalario() override;
    void alterarSalario(double) override;

    void registrarDiasTrabalhado(int dias);
    int obterDiasTrabalhado();
    void alterarValorDiaria(double valor);

    static SalarioDiarista *makeInstance();
private:
    double valorDiaria;
    int diasTrabalhado;
    SalarioDiarista();

};

#endif // SALARIODIARISTA_H
