/*
 * Complexidade de memória.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */

int somar(const vector<int>& v) {
    int soma = 0;

    for (int x : v) {
        soma += x;
    }

    return soma;
}
// O(1)

vector<int> copiar(const vector<int>& v) {
    vector<int> copia;

    for (int x : v) {
        copia.push_back(x);
    }

    return copia;
}
// O(n)



#include <iostream>

int main(int argc, char **argv)
{
	
	return 0;
}

