#ifndef NOTAPROVA_H
#define NOTAPROVA_H

#include "nota.h"

class NotaProva : public Nota
{
public:
    NotaProva(string descricao, int acertos);
    ~NotaProva() override;
    //void add(Nota* n);
    //void remove(Nota* n);
    //Nota* getNota(int indice);
    double calcular() const override;

    double valorEscore() const;

private:
    int m_acertos;
    double m_numeroQuestao;

};

#endif // NOTAPROVA_H
