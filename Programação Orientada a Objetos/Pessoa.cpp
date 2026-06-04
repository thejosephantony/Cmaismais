/*
 * Pessoa.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>

 */


#include <iostream>
#include <string>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
using std::string;


class Pessoa {
	private:
		string nome;
		int idade;
		
	public:
	void setNome(const string& nome){
		this->nome = nome;
	}
	void setIdade(int idade){
		this->idade = idade;
	}
	string getNome() const{
		return nome;
	}
	int getIdade() const{
		return idade;
	}
	void apresentar(){
		cout << "Nome: " << nome << endl;
		cout << "Idade: " << idade << endl;
	}
};


int main()
{
	Pessoa p;
	p.setNome("Joseph");
	p.setIdade(24);
	
	p.apresentar();
	
	p.setNome("Joseph Antony");
	p.apresentar();
	return 0;
}

