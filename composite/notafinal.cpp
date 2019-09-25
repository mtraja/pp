#include "notafinal.h"

NotaFinal::NotaFinal(string descricao)
    :Nota(descricao)
{
    m_notas = new list<Nota*>();
}

NotaFinal::~NotaFinal()
{
    limpar();
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

void NotaFinal::limpar() {
   while (!m_notas->empty())
    {
        Nota* nota = m_notas->front();
        delete nota;
        m_notas->pop_front();
    }
    delete m_notas;
}

