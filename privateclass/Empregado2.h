/*
 * Empregado.h
 *
 *  Created on: Aug 27, 2019
 *      Author: trajano
 */

#ifndef PRIVATECLASS_EMPREGADO_H_
#define PRIVATECLASS_EMPREGADO_H_
#include <string>
using namespace std;

class Empregado {
private:
	string nome;
	string cpf;
	string admissao;
	double diaria;
	double diasTrabalho;
public:
	Empregado();
	virtual ~Empregado();
	
	double calcularSalario();

	const string& getAdmissao() const {
		return admissao;
	}

	void setAdmissao(const string &admissao) {
		this->admissao = admissao;
	}

	const string& getCpf() const {
		return cpf;
	}

	void setCpf(const string &cpf) {
		this->cpf = cpf;
	}

	double getDiaria() const {
		return diaria;
	}

	void setDiaria(double diaria) {
		this->diaria = diaria;
	}

	double getDiasTrabalho() const {
		return diasTrabalho;
	}

	void setDiasTrabalho(double diasTrabalho) {
		this->diasTrabalho = diasTrabalho;
	}

	const string& getNome() const {
		return nome;
	}

	void setNome(const string &nome) {
		this->nome = nome;
	}
};

#endif /* PRIVATECLASS_EMPREGADO_H_ */
