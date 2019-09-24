#include <iostream>
#include <list>
#include "nota.h"
#include "notaprova.h"
#include "notafinal.h"

using namespace std;

int main()
{
    Nota* nota1 = new Nota("Prova Pratica",8.0);
    cout << "Nota 1: " << nota1->obterDescricao() << endl;
    cout << "Valor: " << nota1->calcular() << endl;
    cout << "--------------------------------------------"<<endl;

    NotaProva* nota2 = new NotaProva("Prova Matematica", 18);
    cout << "Nota 2: " << nota2->obterDescricao() << endl;
    cout << "Valor: " << nota2->calcular() << endl;
    cout << "--------------------------------------------"<<endl;

    NotaProva* nota3 = new NotaProva("Prova Redacao", 23);
    cout << "Nota 3: " << nota3->obterDescricao() << endl;
    cout << "Valor: " << nota3->calcular() << endl;
    cout << "--------------------------------------------"<<endl;


    NotaFinal* notaf =new NotaFinal("Media Final");
    notaf->add(nota1);
    notaf->add(nota2);
    notaf->add(nota3);

    cout << "Nota Final: " << notaf->obterDescricao() << endl;
    cout << "Valor: " << notaf->calcular() << endl;
    cout << "--------------------------------------------"<<endl;
    
    notaf->limpar();

    return 0;
}
