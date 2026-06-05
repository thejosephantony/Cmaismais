/*
 * Carro.h
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#ifndef CARRO_H
#define CARRO_H

#include <string>

using std::string;

class Carro{
	private:
		string marca;
		string modelo;
		int ano;
		
	public:
		void setMarca(string marca);
		void setModelo(string modelo);
		void setAno(int ano);
		
	
		string getMarca() const;
		string getModelo() const;
		int getAno() const;
		
		int idadeCarro() const;
		void exibirDados() const;
};

#endif
