/*
 * Retangulo.h
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */

#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo{
	private:
		double largura;
		double altura;
		
	public:
		void setLargura(double largura);

		void setAltura(double altura);
		
		double getLargura() const;
		
		double getAltura() const;
		
		double area() const;
	
};

#endif

