/*
 * Conta.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 
 */

#include "Conta.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void Conta::setTitular(string titular){
		this->titular = titular;
	}
void Conta::setSaldo(double saldo){
		this->saldo = saldo;
	}
string Conta::getTitular() const{
		return titular;
	}
double Conta::getSaldo() const{
		return saldo;
	}
void Conta::depositar(double valor){
		saldo = saldo + valor;
	}
	
bool Conta::sacar(double valor){
		if(valor <= saldo){
			saldo = saldo - valor;
			return true;
		}
		else{
			return false;
		}	
	}
	
void Conta::mostrarSaldo() const{
		cout << "Titular: " << titular << endl;
		cout << "Saldo: R$" << saldo << endl;
	}
