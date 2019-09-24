#include "nota.h"

Nota::Nota(string descricao, double valor) {
    m_valor = valor;
    m_notas = nullptr;
    m_descricao = descricao;
}

Nota::~Nota() {

}

void Nota::add(Nota *nota)
{
    if (m_notas != nullptr)
        m_notas->push_back(nota);
}

void Nota::remove(Nota *nota)
{
    //container.emplace_back(std::make_unique<Type>());
    
    if (m_notas != nullptr)
        m_notas->remove(nota);
}

double Nota::calcular() const
{
    return m_valor;
}

string Nota::obterDescricao()
{
    return m_descricao;
}

Nota* Nota::getNota(int indice)
{
    Nota *nota = nullptr;
    if (m_notas != nullptr) {
        std::list<Nota*>::iterator it = m_notas->begin();
        advance(it, indice);
        nota = *it;
    }
    return nota;

}
