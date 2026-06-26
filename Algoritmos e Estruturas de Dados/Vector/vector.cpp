/*
 * vector.cpp
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
		soma = soma + x;
	}
	return soma;
}

void maiorEmenor(const vector<int>& v){
	int maior = v[0];
	int menor = v[0];
	
	for(int i = 0; i < v.size(); i++){
		if(v[i] > maior){
			maior = v[i];
		}
		if(v[i] < menor){
			menor = v[i];
		}
	}
	cout << "Maior elemento: " << maior << endl;
	cout << "Menor elemento: " << menor << endl;
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


bool existe(const vector<int>& v, int num){
	for(int x : v){
		if(x == num){
			return true;
		}
	}
	return false;
}

int main(){
    vector<int> numeros = {10, 5, 8, 20, 3, 8, 10, 2};

    cout << "Soma: " << somar(numeros) << endl;
    cout << "Ocorrencias de 8: " << contarOcorrencias(numeros, 8) << endl;
    maiorEmenor(numeros);

    if (existe(numeros, 20)) {
        cout << "O numero 20 existe no vector." << endl;
    } else {
        cout << "O numero 20 nao existe no vector." << endl;
    }

	
	return 0;
}

/*
somar              → O(n)
maiorElemento      → O(n)
contarOcorrencias  → O(n)
existe             → O(n) no pior caso

melhor caso: O(1)
pior caso:   O(n)

*/


