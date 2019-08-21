/*
 * emissor_boleto.hpp
 *
 *  Created on: Aug 16, 2019
 *      Author: trajano
 */

#ifndef _EMISSOR_BOLETO_HPP_
#define _EMISSOR_BOLETO_HPP_

#include "construcao_boleto.hpp"

class EmissorBoleto {
	private:
		ConstrucaoBoleto* m_construtor;

	public:
		EmissorBoleto(ConstrucaoBoleto* construtor);

		~EmissorBoleto();

		void construirBoleto();
		void imprimirBoleto();
};




#endif /* _EMISSOR_BOLETO_HPP_ */
