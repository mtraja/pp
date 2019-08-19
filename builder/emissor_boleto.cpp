#include "emissor_boleto.hpp"

EmissorBoleto::EmissorBoleto(ConstrucaoBoleto* construdor) {
	this->m_construdor = construdor;
}

EmissorBoleto::~EmissorBoleto() {

}

void EmissorBoleto::construir() {
 	
	m_construdor->construirBeneficiario();

	m_construdor->construirCedente();
	
    m_construdor->construirCodigoBarra();
	
    m_construdor->construirCodigoNumerico();   
}