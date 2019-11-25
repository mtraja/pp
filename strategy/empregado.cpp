#include "empregado.h"


    Empregado::Empregado(int cargo, double salario) {
        m_cargo = cargo;
        m_salario = salario;
        switch (cargo)
        {
        case GERENTE:
            //m_imposto = new CalculoImposto1();
            break;
        case ANALISTA:
            //m_imposto = new CalculoImposto2();
            break;
        case PROGRAMADOR:
            //m_imposto = new CalculoImposto3();
            break;
        default:
            break;
        }
    }


    double Empregado::calcularSalarioImposto() {
        //m_imposto->calculoSalario(this);
        return 0.0;
    }

    double Empregado::getSalario() {
        return m_salario;
    }

