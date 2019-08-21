#include "emissor_boleto.hpp"

EmissorBoleto::EmissorBoleto(ConstrucaoBoleto* construtor) {
	m_construtor = construtor;
}

EmissorBoleto::~EmissorBoleto() {

}

void EmissorBoleto::construirBoleto() {
 	
	m_construtor->construirBeneficiario();

	m_construtor->construirCedente();
	
    m_construtor->construirCodigoBarra();
	
    m_construtor->construirCodigoNumerico();   
}

void EmissorBoleto::imprimirBoleto() {
	m_construtor->imprimirBoleto();
}