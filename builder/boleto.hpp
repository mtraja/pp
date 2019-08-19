https://github.com/mtraja/pp.githttps://github.com/mtraja/pp.githttps://github.com/mtraja/pp.githttps://github.com/mtraja/pp.git/*
 * boleto.hpp
 *
 *  Created on: Aug 16, 2019
 *      Author: trajano
 */

#ifndef _BOLETO_HPP_
#define _BOLETO_HPP_

#include <string>

class Boleto {

private:
	string* m_beneficiario;
	string* m_cedente;
	string* m_codigoNumerico;
	string* m_codigoBarra;


public:
	Boleto() {
		cout << " Boleto criado " << endl;
	}

	void adicionarBeneficiario(string* benefi) {
		m_beneficiario = benefi;
	}

	void adicionarCedente(string* cedente) {
		m_cedente = cedente;
	}	
	
	void adicionarCodigoNumerico(string* codigo) {
		m_codigoNumerico = codigo;
	}

	void adicionarCodigoBarra(string* codigo) {
		m_codigoBarra = codigo;
	}

};

#endif /* _BOLETO_HPP_ */
