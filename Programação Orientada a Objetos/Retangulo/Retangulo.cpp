/*
 * Retangulo.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */

#include "Retangulo.h"

void Retangulo::setAltura(double altura){
		this->altura = altura;
	}
void Retangulo::setLargura(double largura){
		this->largura = largura;
	}
double Retangulo::getAltura() const{
	return altura;
	}
double Retangulo::getLargura() const{
		return largura;
	}
double Retangulo::area() const{
		return (largura * altura);
	}
