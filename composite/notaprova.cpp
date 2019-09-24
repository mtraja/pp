#include "notaprova.h"

NotaProva::NotaProva(string desc, int acertos)
    :Nota(desc)
{
    m_acertos = acertos;
    m_numeroQuestao = 25;
}

NotaProva::~NotaProva()
{

}

double NotaProva::calcular() const
{
    return m_acertos * valorEscore();
}

double NotaProva::valorEscore() const
{
    return 10/m_numeroQuestao;
}

