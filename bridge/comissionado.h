#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "empregado.h"
#include "salario_comissionado.h"


class Comissionado : public Empregado
{
public:
    Comissionado(string cpf, string nome);
    ~Comissionado() override;
    double obterSalario() override;
    virtual void definirSalario(double) override;

    void definirComissao(double comissao);   
    SalarioComissionado * getSalarioComissionado();


};

#endif // COMISSIONADO_H
