
#include <iostream>
#include "boleto.hpp"

using namespace std;

Boleto::Boleto() {
		cout << " Boleto criado " << endl;
}

Boleto::~Boleto(){
	
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

	string Boleto::obterBeneficiario() {
		return m_beneficiario;
	}

	string Boleto::obterCedente() {
		return m_cedente;
	}

	string Boleto::obterCodigoNumerico() {
		return m_codigoNumerico;
	}

	string Boleto::obterCodigoBarra() {
		return m_codigoBarra;
	}
