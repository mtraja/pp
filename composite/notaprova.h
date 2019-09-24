#ifndef NOTAPROVA_H
#define NOTAPROVA_H

#include "nota.h"

class NotaProva : public Nota
{
public:
    NotaProva(string descricao, int acertos);
    ~NotaProva() override;
    void add(Nota* n) = delete;
    void remove(Nota* n) = delete;
    Nota* getNota(int indice) = delete;
    double calcular() const override;

    double valorEscore() const;

private:
    int m_acertos;
    double m_numeroQuestao;

};

#endif // NOTAPROVA_H
