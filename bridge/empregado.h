#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>
#include "salario.h"

using namespace std;

class Empregado
{
public:
    Empregado(string cpf, string nome);
    virtual ~Empregado();
    void setCpf(string);
    string getCpf();
    void setNome(string);
    string getNome();

    virtual double obterSalario()=0;
    virtual void definirSalario(double)=0;

protected:
    Salario *getSalario();
    void setSalario(Salario *salario);
    
private:
    string m_cpf;
    string m_nome;

    Salario* m_salario;
};

#endif // EMPREGADO_H
