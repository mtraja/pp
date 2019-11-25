#include "imposto.h"
#include "empregado.h"

class CalculoImposto1: public CalculoImposto {
public:
    CalculoImposto1() : CalculoImposto() {}

    double calculoSalario(Empregado *emp) {
        double salario = emp->getSalario() * 0.85;
        if (emp->getSalario() > 8000.0) {
			salario = emp->getSalario() * 0.9;
		}
		return salario;

    }
};

class CalculoImposto2: public CalculoImposto {
public:
    CalculoImposto2() : CalculoImposto() {}

    double calculoSalario(Empregado *emp) {
        double salario =emp->getSalario() * 0.8;
        if (emp->getSalario() > 5700.0) {
			salario = emp->getSalario() * 0.85;
		}
		return salario;        
    }
};

class CalculoImposto3: public CalculoImposto {
public:
    CalculoImposto3() : CalculoImposto() {}

    double calculoSalario(Empregado *emp) {
        double salario = emp->getSalario() * 0.75;
        if (emp->getSalario() > 4000) {
			salario = emp->getSalario() * 0.85;
		}
		return salario;        
    }
};
