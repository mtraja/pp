#include "construcao_boleto.hpp"

ConstrucaoBoleto::ConstrucaoBoleto() {
    m_boleto = new Boleto();
}

ConstrucaoBoleto::~ConstrucaoBoleto() {
    delete m_boleto;
}
 
void ConstrucaoBoleto::construirBeneficiario() {

}

void ConstrucaoBoleto::construirCedente() {

}

void ConstrucaoBoleto::construirCodigoNumerico() {

}

void ConstrucaoBoleto::construirCodigoBarra() {

}

void ConstrucaoBoleto::imprimirBoleto() {
    cout << endl << "====================================================================" << endl;
    cout << "Beneficiario: " << m_boleto->obterBeneficiario() << endl;
	cout << "Cedente: " << m_boleto->obterCedente() << endl; 
	cout << "Codigo Numerico: " << m_boleto->obterCodigoNumerico() << endl; 
	cout << "Codigo Barra: " << m_boleto->obterCodigoBarra() << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
}