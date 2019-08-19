
#include <iostream>
#include "boleto.hpp"

using namespace std;

Boleto::Boleto() {
		cout << " Boleto criado " << endl;
}

void Boleto::adicionarBeneficiario(const string& benefi) {
		this->m_beneficiario = benefi;
}

void Boleto::adicionarCedente(const string& cedente) {
		m_cedente = cedente;
}	
	
void Boleto::adicionarCodigoNumerico(const string& codigo) {
		m_codigoNumerico = codigo;
}

void Boleto::adicionarCodigoBarra(const string& codigo) {
		m_codigoBarra = codigo;
}

void Boleto::imprimir() {
	cout << m_beneficiario <<" + " << m_cedente <<" + " << m_codigoNumerico << " + " << m_codigoBarra << endl;
}