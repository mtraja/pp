#ifndef GRATIPROJETO_H
#define GRATIPROJETO_H
#include "gratificacao.h"

class GratiProjeto : public Gratificacao
{
public:
    GratiProjeto(Salario*);
    double calcular() override;

    void setNumeroProjeto(int);
    int getNumeroProjeto();

    void setValorProjeto(double);
    double getValorProjeto();

private:
    int m_numeroPjt;
    double m_valorPjt;
};

#endif // GRATIPROJETO_H
