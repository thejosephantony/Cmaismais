/*
 * vector 1.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */

#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int somar(const vector<int>& v){
	int soma = 0;
	for(int x : v){
		soma = x + soma;
	}
	return soma;
}

int maiorElemento(const vector<int>& v){
	int maior = v[0];
	for(int x : v){
		if(x > maior){
			maior = x;
		}	
	}
	return maior;

}

int menorElemento(const vector<int>& v){
	int menor = v[0];
	for(int x : v){
		if(x < menor){
			menor = x;
		}
	}
	return menor;
}

int contarPares(const vector<int>& v){
	int contador = 0;
	for(int x : v){
		if(x % 2 == 0){
			contador++;
		}
	}
	return contador;
}

int contarOcorrencias(const vector<int>& v, int num){
	int cont = 0;
		
	for(int x : v){
		if(num == x){
			cont++;
		}
	}
	
	return cont;
}

void mostrarVector(const vector<int>& v){
	for(int x : v){
		cout << x << " ";
	}
	
	cout << endl;
}

void inverter(std::vector<int>& v) {
    if (v.empty()) return;
    int inicio = 0;
    int fim = static_cast<int>(v.size()) - 1;
    while (inicio < fim) {
        int temp = v[inicio];
        v[inicio] = v[fim];
        v[fim] = temp;
        ++inicio;
        --fim;
    }
}


int contarImpares(const vector<int>& v){
	int contador = 0;
	for(int x : v){
		if(x % 2 != 0){
			contador++;
		}
		
	}
	return contador;
}

bool existe(const vector<int>& v, int num){
	for(int x : v){
		if(x == num){
			return true;
		}
	}
	return false;
}

double media(const vector<int>& v) {
    if (v.empty()) return 0.0; 
    int soma = 0;
    for (int x : v) {
        soma += x;
    }
    return static_cast<double>(soma) / v.size();
}


int main(){
	vector<int> numeros = {10, 5, 8, 20, 3, 8, 10, 2};
	
	cout << "Vector original: " << endl;
	mostrarVector(numeros);
	cout << endl;
	
	cout << "Soma: " << somar(numeros) << endl;
	cout << "Maior: " << maiorElemento(numeros) << endl;
	cout << "Menor: " << menorElemento(numeros) << endl;
	cout << "Pares: " << contarPares(numeros) << endl;
	cout << "Impares: " << contarImpares(numeros) << endl;
	cout << "Ocorrencia de 8: " << contarOcorrencias(numeros, 8) << endl;
	cout << "Existe 20? " << existe(numeros, 20) << endl;
	cout << "Existe 99? " << existe(numeros, 99) << endl;
	cout << "Media: " << media(numeros) << endl;
	cout << "Vector invertido: ";
	inverter(numeros);
	mostrarVector(numeros);

	return 0;
}

