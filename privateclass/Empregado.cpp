/*
 * Empregado.cpp
 *
 *  Created on: Aug 27, 2019
 *      Author: trajano
 */

#include "Empregado.h"

Empregado::Empregado(const string& cpf) {
	empregado = new DataEmp();
	empregado->setCpf(cpf);
	empregado->setDiaria(325.0);
}

Empregado::Empregado(const string& cpf, const string& nome):Empregado(cpf) {
	empregado->setNome(nome);
}

Empregado::~Empregado() {
	delete empregado;
}

double Empregado::calcularSalario() {
	double salario = empregado->getDiaria() * empregado->getDiasTrabalho();
	return salario;
}

void Empregado::contratacao(const string& admissao) {
	empregado->setAdmissao(admissao);
}


