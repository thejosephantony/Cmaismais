/*
 * Analise de Algoritmos Recursivos.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

// Tempo: O(n)
// Memoria: O(n), por causa da pilha recursiva
int fatorial(int n) {
    if (n == 0) {
        return 1;
    }

    return n * fatorial(n - 1);
}

// Tempo: O(n)
// Memoria: O(n), por causa da pilha recursiva
int somarRecursivo(const vector<int>& v, int i) {
    if (i == static_cast<int>(v.size())) {
        return 0;
    }

    return v[i] + somarRecursivo(v, i + 1);
}

// Tempo: O(log n)
// Memoria: O(log n), por causa da pilha recursiva
bool buscaBinariaRecursiva(const vector<int>& v, int valor, int inicio, int fim) {
    if (inicio > fim) {
        return false;
    }

    int meio = inicio + (fim - inicio) / 2;

    if (v[meio] == valor) {
        return true;
    }

    if (valor < v[meio]) {
        return buscaBinariaRecursiva(v, valor, inicio, meio - 1);
    }

    return buscaBinariaRecursiva(v, valor, meio + 1, fim);
}

// Tempo: O(2^n)
// Memoria: O(n), profundidade da recursao
int fibonacciRuim(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacciRuim(n - 1) + fibonacciRuim(n - 2);
}

// Tempo: O(n)
// Memoria: O(1)
int fibonacciIterativo(int n) {
    if (n <= 1) {
        return n;
    }

    int anterior = 0;
    int atual = 1;

    for (int i = 2; i <= n; i++) {
        int proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    return atual;
}

int main() {
    vector<int> numeros = {2, 4, 6, 8, 10, 12, 14, 16};

    cout << "Fatorial de 5: " << fatorial(5) << endl;

    cout << "Soma recursiva: "
         << somarRecursivo(numeros, 0) << endl;

    cout << "Busca 10: "
         << (buscaBinariaRecursiva(numeros, 10, 0, static_cast<int>(numeros.size()) - 1) ? "Sim" : "Nao")
         << endl;

    cout << "Fibonacci ruim de 10: "
         << fibonacciRuim(10) << endl;

    cout << "Fibonacci iterativo de 10: "
         << fibonacciIterativo(10) << endl;

    return 0;
}
