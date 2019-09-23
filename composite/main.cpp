#include <iostream>
#include <list>
#include "nota.h"
#include "notaprova.h"
#include "notafinal.h"

using namespace std;

int main()
{
    Nota nota1 ("Prova Pratica",8.0);
    cout << "Nota 1: " << nota1.obterDescricao() << endl;
    cout << "Valor Nota 1: " << nota1.calcular() << endl;

    NotaProva nota2 ("Prova Matematica", 17);
    cout << "Nota 2: " << nota2.obterDescricao() << endl;
    cout << "Valor Nota 2: " << nota2.calcular() << endl;

    NotaProva nota3 ("Prova Redacao", 22);
    cout << "Nota 3: " << nota3.obterDescricao() << endl;
    cout << "Valor Nota 3: " << nota3.calcular() << endl;


    NotaFinal notaf("Media Final");
    notaf.add(&nota1);
    notaf.add(&nota2);
    notaf.add(&nota3);

    cout << "Nota Final: " << notaf.obterDescricao() << endl;
    cout << "Valor Nota Final: " << notaf.calcular() << endl;

    return 0;
}
