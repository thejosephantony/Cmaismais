/*
 * Conta.h
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */

#ifndef CONTA_H
#define CONTA_H

#include <string>

using std::string;

class Conta{
	private:
		string titular;
		double saldo;
	
	public:
		void setTitular(string titular);
		void setSaldo(double saldo);
		
		string getTitular() const;
		double getSaldo() const;
		
		void depositar(double valor);
		bool sacar(double valor);
		void mostrarSaldo() const;
	
};

#endif
