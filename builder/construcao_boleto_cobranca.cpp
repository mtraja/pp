
#include "boleto.hpp"
#include "construcao_boleto_cobranca.hpp"



ConstrucaoBoletoCobranca::ConstrucaoBoletoCobranca() : ConstrucaoBoleto() {

}

ConstrucaoBoletoCobranca::~ConstrucaoBoletoCobranca() {
	
}


void ConstrucaoBoletoCobranca::construirBeneficiario(){
	string* benefi =  new string("Carlos Silveira");
	 m_boleto->adicionarBeneficiario(benefi);
}

void ConstrucaoBoletoCobranca::construirCedente(){
	string* cedente =  new string("Joana Castro");
	m_boleto->adicionarCedente(cedente);
}

void ConstrucaoBoletoCobranca::construirCodigoNumerico(){
	string* codigo =  new string("97060.6754312346.6712456091.5621334578");
	m_boleto->adicionarCodigoNumerico(codigo);	
}

void ConstrucaoBoletoCobranca::construirCodigoBarra() {
	
	string* codigo =  new string("1111110000011111100000111111");
	m_boleto->adicionarCodigoBarra(codigo);	
}

Boleto* ConstrucaoBoletoCobranca::obterBoleto() {
	return m_boleto;
}
