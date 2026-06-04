/*
 * main.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 *
 * 
 */

#include "Aluno.h"
#include <iostream>
#include <locale>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;
using std::string;


int main(){
	cout << fixed << setprecision(2);
	setlocale(LC_ALL, "Portuguese");
	Aluno aluno;
	double n1;
	double n2;
	string nome;
	
	cout << "Insira seu nome: ";
	getline(cin, nome);
	aluno.setNome(nome);
	
	cout << "Digite usa nota 1: ";
	cin >> n1;
	aluno.setNota1(n1);
	
	cout << "Digite sua nota 2: ";
	cin >> n2;
	aluno.setNota2(n2);
	
	cout << "A sua média é: " << aluno.media() << endl;
	
	if(aluno.aprovado()){
		cout << "Situação: aprovado." << endl;
	}
	else{
		cout << "Situação: reprovado." << endl;
	}
	return 0;
}

