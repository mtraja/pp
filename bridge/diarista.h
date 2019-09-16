#ifndef DIARISTA_H
#define DIARISTA_H
#include "empregado.h"
#include "salario_diarista.h"


class Diarista : public Empregado
{
public:
     Diarista(string cpf, string nome);
    ~Diarista() override;
    double obterSalario() override;
    virtual void definirSalario(double) override;
    void definirDiasTrabalhado(int dias);

private:
    SalarioDiarista *getSalarioDiaria();
};

#endif // DIARISTA_H
