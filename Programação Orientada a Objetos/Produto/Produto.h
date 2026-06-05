/*
 * Produto.h
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>

 * 
 */

#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
using std::string;

class Produto{
	private:
		string nome;
		double preco;
		double desconto;
		
	public:
	
	void setNome(string nome);
	void setPreco(double preco);
	void setDesconto(double desconto);
	
	string getNome() const;
	double getPreco() const;
	double getDesconto() const;
	
	double novoPreco(double desconto) const;
	void mostrar() const;	
	
};

#endif
