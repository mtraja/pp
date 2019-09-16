#include <iostream>
#include "empregado.h"
#include "diarista.h"
#include "salario.h"
#include "comissionado.h"
using namespace std;

int main()
{
    Diarista *emp2 =  new Diarista("444555", "Julia Amorim");
    emp2->definirDiasTrabalhado(10);
    emp2->definirSalario(560.0);

    cout << "Nome do Diarista: " << emp2->getNome()<< endl;
    cout << "Salario: " << emp2->obterSalario() << endl;

    Comissionado *emp3 =  new Comissionado("222333", "Marta Costa");
    emp3->definirComissao(280.0);
    emp3->definirSalario(410.0);

    cout << "Nome do Diarista: " << emp3->getNome()<< endl;
    cout << "Salario: " << emp3->obterSalario() << endl;

    Empregado *emp4 =  new Diarista("111555", "Robin Justus");
    dynamic_cast<Diarista*>(emp4)->definirDiasTrabalhado(10);
    emp4->definirSalario(420.0);

    cout << "Nome do Empregado: " << emp4->getNome()<< endl;
    cout << "Salario: " << emp4->obterSalario() << endl;


    delete emp2;
    return 0;
}
