/*
 * Carro.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */

#include "Carro.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void Carro::setMarca(string marca){
		this-> marca = marca;
	}
void Carro::setModelo(string modelo){
		this-> modelo = modelo;
	}
void Carro::setAno(int ano){
		this->ano = ano;
	}
string Carro::getMarca() const{
		return marca;
	}
string Carro::getModelo() const{
		return modelo;
	}
int Carro::getAno() const{
		return ano;
	}
int Carro::idadeCarro() const{
    return 2026 - ano;
}

void Carro::exibirDados() const{
		cout << "Marca: " << marca << endl;
		cout << "Modelo: " << modelo << endl;
		cout << "Ano: " << ano << endl;
		cout << "Idade do carro: " << idadeCarro() << " anos" << endl;
	}
	
