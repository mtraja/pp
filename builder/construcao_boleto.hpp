/*
 * construcao_boleto.hpp
 *
 *  Created on: Aug 16, 2019
 *      Author: trajano
 */

#ifndef _CONSTRUCAO_BOLETO_HPP_
#define _CONSTRUCAO_BOLETO_HPP_

#include <iostream>
#include "boleto.hpp"

using namespace std;

class ConstrucaoBoleto {
public:
	virtual void construirBeneficiario();

	virtual void construirCedente();

	virtual void construirCodigoNumerico();

	virtual void construirCodigoBarra();

	virtual void imprimirBoleto();

	virtual Boleto* obterBoleto() = 0;

	virtual ~ConstrucaoBoleto();

protected:
	ConstrucaoBoleto();
	Boleto* m_boleto;

};

#endif /* _CONSTRUCAO_BOLETO_HPP_ */
