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
	empregado->setDiasTrabalho(27.0);
}

Empregado::Empregado(const string& cpf, string& nome):Empregado(cpf) {
	empregado->setNome(nome);
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

void Empregado::contratacao(const string& admissao) const {
	empregado->setAdmissao(admissao);
}

void Empregado::imprimir() {
	std::cout << "Nome: " << empregado->getNome() << endl;
	std::cout << "Cpf: " << empregado->getCpf() << endl;
	std::cout << "Diaria: " << empregado->getDiaria() << endl;
	std::cout << "DiasTrabalhos: " << empregado->getDiasTrabalho() << endl;
}


