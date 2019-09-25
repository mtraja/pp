#ifndef GRATICOMISSAO_H
#define GRATICOMISSAO_H
#include "gratificacao.h"

class GratiComissao : public Gratificacao
{
public:
    GratiComissao(Salario*);
    double calcular() override;

    void setComissao(double);
    double getComissao();

private:
    double m_comissao;

};
#endif // GRATICOMISSAO_H
