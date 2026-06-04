/*
 * Circulo.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>

 * 
 */


#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

class Circulo {
	private:
		double Raio = 0.0;
	
	public:
		double getRaio() const;
		double getArea() const;
		double getPerimetro() const;
		void setRaio(double valor);
};

double Circulo::getRaio() const{
	return Raio;
}

double Circulo::getArea() const{
	double PI = 3.14;
	return (Raio * Raio * PI);
}

double Circulo::getPerimetro() const{
	double PI = 3.14;
	return (2 * PI * Raio);
}

void Circulo::setRaio(double valor){
	 Raio = valor;
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	Circulo Circulo1;
	Circulo1.setRaio(10.0);
	cout << "Raio: " << Circulo1.getRaio() << endl;
	cout << "Área: " << Circulo1.getArea() << endl;
	cout << "Perímetro: " << Circulo1.getPerimetro() << endl;
	
	return 0;
	
}
