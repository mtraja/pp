 /* boleto.hpp
 *
 *  Created on: Aug 16, 2019
 *      Author: trajano
 */

#ifndef _BOLETO_HPP_
#define _BOLETO_HPP_

#include <string>

using namespace std;

class Boleto {

private:
	string m_beneficiario;
	string m_cedente;
	string m_codigoNumerico;
	string m_codigoBarra;

public:
	Boleto();

	void adicionarBeneficiario(const string& benefi);

	void adicionarCedente(const string& cedente);
	
	void adicionarCodigoNumerico(const string& codigo);

	void adicionarCodigoBarra(const string& codigo);

	string obterBeneficiario();

	string obterCedente();

	string obterCodigoNumerico();

	string obterCodigoBarra();

};

#endif /* _BOLETO_HPP_ */
