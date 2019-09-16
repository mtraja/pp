#ifndef SALARIO_H
#define SALARIO_H


class Salario {
public:
    Salario();
    virtual ~Salario();
    virtual double calcularSalario();
    virtual void alterarSalario(double);

    
private:
    double m_salario;
};

#endif // SALARIO_H
