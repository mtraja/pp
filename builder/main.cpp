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

	ConstrucaoBoletoCobranca* construtor = new ConstrucaoBoletoCobranca();

	EmissorBoleto* emissor = new EmissorBoleto(construtor);

	emissor->construirBoleto();

	construtor->imprimirBoleto();

	

	return 0;
}





