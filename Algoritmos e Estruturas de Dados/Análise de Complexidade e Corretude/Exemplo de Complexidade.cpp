/*
 * Exemplo de Complexidade.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */
 
/*
O(1)       → acesso direto, custo constante
O(log n)   → reduz pela metade a cada passo
O(n)       → percorre a entrada uma vez
O(n log n) → ordenações eficientes
O(n²)      → dois laços aninhados
O(2^n)     → muitas escolhas recursivas
O(n!)      → permutações completas

*/



#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int pegarPrimeiro(const vector<int>& v) {
    return v[0];
}

// O(1)

int somar(const vector<int>& v) {
    int soma = 0;

    for (int x : v) {
        soma += x;
    }

    return soma;
}

// O(n)

bool existe(const vector<int>& v, int valor) {
    for (int x : v) {
        if (x == valor) {
            return true;
        }
    }

    return false;
}

// O(n)

void imprimirTodosOsPares(const vector<int>& v) {
    for (int i = 0; i < static_cast<int>(v.size()); i++) {
        for (int j = 0; j < static_cast<int>(v.size()); j++) {
            cout << "(" << v[i] << ", " << v[j] << ")" << endl;
        }
    }
}

// O(n²)

int main() {
    vector<int> numeros = {10, 20, 30, 40, 50};

    cout << "Primeiro: " << pegarPrimeiro(numeros) << endl;
    cout << "Soma: " << somar(numeros) << endl;
    cout << "Existe 30? " << (existe(numeros, 30) ? "Sim" : "Nao") << endl;

    cout << endl;
    cout << "Pares:" << endl;
    imprimirTodosOsPares(numeros);

    return 0;
}
