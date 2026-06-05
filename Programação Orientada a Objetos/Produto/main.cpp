/*
 * main.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 
 */

#include "Produto.h"
#include <iostream>
#include <iomanip>
#include <locale>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setprecision;
using std::fixed;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << fixed << setprecision(2);
	
	Produto p1;
	
	string nome;
	double preco;
	double desconto;
	
	cout << "Qual o nome do produto? ";
	getline(cin, nome);
	p1.setNome(nome);
	
	cout << "Qual o preço do produto? ";
	cin >> preco;
	p1.setPreco(preco);
	
	cout << "Qual o desconto percentual (%)? ";
	cin >> desconto;
	p1.setDesconto(desconto);
	
	
	cout << "\nDados do produto:\n";
	p1.mostrar();
	
	return 0;
		
}
