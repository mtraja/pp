#include "notafinal.h"

NotaFinal::NotaFinal(string descricao)
    :Nota(descricao)
{
    m_notas = new list<Nota*>();
}

NotaFinal::~NotaFinal()
{
    m_notas->clear();
    delete m_notas;
}

double NotaFinal::calcular() const
{
    double valor = 0.0;
    auto qtdNotas = m_notas->size();
    for(Nota *nota : *this->m_notas) {
        valor += nota->calcular();
    }
    valor /= qtdNotas;
    return valor;
}
