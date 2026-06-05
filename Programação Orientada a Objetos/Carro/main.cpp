/*
 * main.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */


#include "Carro.h"
#include <iostream>
#include <locale>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	Carro carro;
	
	string Marca;
	string Modelo;
	int Ano;
	
	cout << "Qual a marca do carro? ";
	getline(cin, Marca);
	carro.setMarca(Marca);
	
	cout << "Qual o modelo do carro? ";
	getline(cin, Modelo);
	carro.setModelo(Modelo);
	
	cout << "Qual o ano do carro? ";
	cin >> Ano;
	carro.setAno(Ano);
	
	cout << "\nDados do carro\n";
	carro.exibirDados();
	return 0; 
}

