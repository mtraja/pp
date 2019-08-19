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