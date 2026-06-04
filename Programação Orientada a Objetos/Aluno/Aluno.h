/*
 * Aluno.h
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#ifndef ALUNO_H
#define ALUNO_H

#include <string>
using std::string;


class Aluno{
	private:
		string Nome;
		double Nota1;
		double Nota2;
	
	public:
		void setNome(string Nome);
		void setNota1(double Nota1);
		void setNota2(double Nota2);
		
		string getNome() const;
		double getNota1() const;
		double getNota2() const;
		
		double media() const;
		bool aprovado() const;
};

#endif
