/*
 * Analise de Complexidade 2.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int acessarPrimeiro(const vector<int>& v){
	return v[0];
}
// O (1)

int somarElementos(const vector<int>& v){
	int soma = 0;
	for(int i = 0; i < v.size(); i++){
		soma = soma + v[i];
	}
	return soma;
}

// O(n)

int contarOcorrencias(const vector<int>& v, int valor){
	int contador = 0;
	for(int i = 0; i < v.size(); i++){
		if(valor == v[i]){
			contador++;
		}	
	}
	return contador;
}

// O(n)
bool temDuplicado(const vector<int>& v) {
    for (size_t i = 0; i < v.size(); ++i) {
        for (size_t j = i + 1; j < v.size(); ++j) {
            if (v[i] == v[j]) return true;
        }
    }
    return false;
}

// O(n²)

void imprimirMatrizQuadrada(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << std::setw(4) << (i * n + j + 1);
        }
        std::cout << std::endl;
    }
}
// O(n²)

int main(int argc, char **argv)
{
	
	return 0;
}

