#include <iostream>
#include "assalariado.h"
#include "gratiprojeto.h"
#include "graticomissao.h"

using namespace std;

int main()
{
     Assalariado sal1(1240.0);

     cout << "Salario Base : R$ "<< sal1.calcular() << endl;
     cout << "-----------------------------------------" << endl;
     GratiProjeto grat1(&sal1);

     cout << "Salario com Projeto: R$ ";
     cout << grat1.calcular() << endl;
     cout << "-----------------------------------------" << endl;

     GratiComissao grat2(&sal1);

     cout << "Salario com Comissao: R$ ";
     cout << grat2.calcular() << endl;
     cout << "-----------------------------------------" << endl;

     GratiProjeto grat3(&grat2);

     cout << "Salario com Projeto e Comissao : R$ ";
     cout << grat3.calcular() << endl;
     cout << "-----------------------------------------" << endl;

    return 0;
}
