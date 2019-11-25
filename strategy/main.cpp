#include <iostream>
#include <string>
#include "empregado.h"



int main(int argc, char const *argv[])
{
    Empregado* emp1 = new Empregado(Empregado::GERENTE, 6500.0);
    Empregado* emp2 = new Empregado(Empregado::PROGRAMADOR, 3100.0);
    Empregado* emp3= new Empregado(Empregado::ANALISTA, 4700.0);
    
    std::cout << emp1->calcularSalarioImposto() << std::endl;
    std::cout << emp2->calcularSalarioImposto() << std::endl;
    std::cout << emp3->calcularSalarioImposto() << std::endl;
		

    return 0;
}
