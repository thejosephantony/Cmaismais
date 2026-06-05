/*
 * main.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#include "Conta.h"
#include <iostream>
#include <locale>
#include <iomanip>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << fixed << setprecision(2);
	string nome;
	double saldo;
	double valor;
	int op;
	
	Conta conta;
	
	cout << "Qual o seu nome? ";
	getline(cin, nome);
	conta.setTitular(nome);
	
	cout << "Qual o seu saldo? ";
	cin >> saldo;
	conta.setSaldo(saldo);
	while(true){

    cout << "\n===== MENU =====\n";
    cout << "1 - Depositar\n";
    cout << "2 - Sacar\n";
    cout << "3 - Mostrar saldo\n";
    cout << "4 - Sair\n";
    cout << "Opcao: ";

    cin >> op;

    if(op == 4){
        break;
    }

    switch(op){

        case 1:
            cout << "Quanto deseja depositar? ";
            cin >> valor;
            conta.depositar(valor);
            break;

        case 2:
            cout << "Quanto deseja sacar? ";
            cin >> valor;

            if(conta.sacar(valor)){
                cout << "Saque realizado.\n";
            }
            else{
                cout << "Saldo insuficiente.\n";
            }

            break;

        case 3:
            conta.mostrarSaldo();
            break;

        default:
            cout << "Opcao invalida.\n";
    }
}
	return 0;
}

