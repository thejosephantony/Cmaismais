/*
 * Produto.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */

#include "Produto.h"
#include <string>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void Produto::setNome(string nome){
		this->nome = nome;
}
void Produto::setPreco(double preco){
		this->preco = preco;
}

void Produto::setDesconto(double desconto){
		this->desconto = desconto;
	}

string Produto::getNome() const{
		return nome;
	}
double Produto::getPreco() const{
		return preco;
}

double Produto::getDesconto() const{
		return desconto;
	}

double Produto::novoPreco(double desconto) const{
		return preco * (1 - desconto/100.0);
	}
void Produto::mostrar() const{
		cout << "Nome: " << nome << endl;
		cout << "Preço R$: " << preco << endl;
		cout << "Preço com desconto R$: " << novoPreco(desconto) << endl;
	}

