/*
 * main.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#include <iostream>
#include <locale>
#include "Retangulo.h"

using std::cout;
using std::cin;
using std::endl;

int main(){
	setlocale(LC_ALL, "Portuguese");
	Retangulo retangulo;
	retangulo.setLargura(10);
	retangulo.setAltura(5);
	retangulo.area();
	
	cout << "Área = " << retangulo.area() << endl;
	
	return 0;

}

