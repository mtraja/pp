/*
 * concretebuilder.hpp
 *
 *  Created on: Aug 16, 2019
 *      Author: trajano
 */

#ifndef _CONSTRUCAO_BOLETO_COBRANCA_HPP_
#define _CONSTRUCAO_BOLETO_COBRANCA_HPP_

#include "construcao_boleto.hpp"
#include "boleto.hpp"

class ConstrucaoBoletoCobranca : public ConstrucaoBoleto {

public:
	
	ConstrucaoBoletoCobranca();
	
	virtual ~ConstrucaoBoletoCobranca();

	virtual void construirBeneficiario();

	virtual void construirCedente();

	virtual void construirCodigoNumerico();

	virtual void construirCodigoBarra();

	virtual Boleto* obterBoleto();

};



#endif /* _CONSTRUCAO_BOLETO_COBRANCA_HPP_ */
