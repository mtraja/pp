#include "empregado.h"
#include "salario.h"

Empregado::Empregado(string cpf, string nome)
{
    m_cpf = cpf;
    m_nome = nome;
}


Salario * Empregado::getSalario(){
    return m_salario;
}

void Empregado::setSalario(Salario *salario) {
    m_salario = salario;
}

Empregado::~Empregado() {

}

void Empregado::setCpf(string cpf)
{
    m_cpf = cpf;
}

string Empregado::getCpf()
{
    return m_cpf;
}

void Empregado::setNome(string nome)
{
    m_nome = nome;
}

string Empregado::getNome()
{
    return m_nome;
}

