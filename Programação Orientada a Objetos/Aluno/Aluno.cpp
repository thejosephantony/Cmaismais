/*
 * Aluno.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#include "Aluno.h"
#include <string>

using std::string;

void Aluno::setNome(string Nome){
		this->Nome = Nome;
	}
void Aluno::setNota1(double Nota1){
		this->Nota1 = Nota1;
	}
void Aluno::setNota2(double Nota2){
		this->Nota2 = Nota2;
	}
string Aluno::getNome() const{
		return Nome;
	}
double Aluno::getNota1() const{
		return Nota1;
	}
double Aluno::getNota2() const{
		return Nota2;
	}
double Aluno::media() const{
		return (Nota1 + Nota2)/2.0;
	}
bool Aluno::aprovado() const{
		if(media() >= 7.0){
			return true;
		}
		else{
			return false;
	}
}
