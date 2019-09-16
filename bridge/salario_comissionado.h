#ifndef SALARIOCOMISSIONADO_H
#define SALARIOCOMISSIONADO_H
#include "salario.h"

class SalarioComissionado : public Salario
{
public:

    virtual ~SalarioComissionado();
    virtual double calcularSalario();
    virtual void alterarSalario(double);

    void registrarComssao(double comissao);
    double obterComissao();

    static SalarioComissionado *makeInstance();

private:
    SalarioComissionado();
    double m_comissao;

};

#endif // SALARIOCOMISSIONADO_H
