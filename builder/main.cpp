/*
 * main.cpp
 *
 *  Created on: Aug 16, 2019
 *      Author: trajano
 */



#include <iostream>
#include <string>
#include "boleto.hpp"
#include "emissor_boleto.hpp"
#include "construcao_boleto_cobranca.hpp"


using namespace std;

int main() {

	ConstrucaoBoletoCobranca* builder = new ConstrucaoBoletoCobranca();

	EmissorBoleto* director = new EmissorBoleto(builder);

	director->construir();

	Boleto* boleto = builder->obterBoleto();

	boleto->imprimir();
	
	return 0;
}





