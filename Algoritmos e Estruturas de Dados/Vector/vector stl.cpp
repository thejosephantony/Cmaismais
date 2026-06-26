/*
 * vector stl.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>

 * 
 */

#include <iostream>
#include <vector>
#include <algorithm>   // sort, find, minmax_element, count
#include <numeric>     // accumulate
#include <limits>      // para limpeza de buffer

using std::cout;
using std::cin;
using std::endl;
using std::vector;




int somar(const vector<int>& v) {
    return std::accumulate(v.begin(), v.end(), 0);
}


double media(const vector<int>& v) {
    if (v.empty()) return 0.0;
    return static_cast<double>(somar(v)) / v.size();
}

void maiorEMenor(const vector<int>& v) {
    if (v.empty()) {
        cout << "Vector vazio.\n";
        return;
    }
    auto [menor, maior] = std::minmax_element(v.begin(), v.end());
    cout << "Menor: " << *menor << ", Maior: " << *maior << endl;
}


int contarOcorrencias(const vector<int>& v, int num) {
    return std::count(v.begin(), v.end(), num);
}


bool existe(const vector<int>& v, int num) {
    return std::find(v.begin(), v.end(), num) != v.end();
}


void removerNumero(vector<int>& v, int num) {
    v.erase(std::remove(v.begin(), v.end(), num), v.end());
}

void removerRepetidos(vector<int>& v) {
    if (v.empty()) return;
    std::sort(v.begin(), v.end());
    v.erase(std::unique(v.begin(), v.end()), v.end());
}


int main() {
    int N;
    cout << "Quantos numeros? ";
    cin >> N;

    if (cin.fail() || N <= 0) {
        cout << "Entrada invalida.\n";
        return 1;
    }

    vector<int> numeros;
    numeros.reserve(N);   

    cout << "Digite " << N << " numeros: ";
    for (int i = 0; i < N; ++i) {
        int valor;
        cin >> valor;
        if (cin.fail()) {
            cout << "Erro na leitura.\n";
            return 1;
        }
        numeros.push_back(valor);  
    }

    cout << "\n--- RESULTADOS ---\n";
    cout << "Soma: " << somar(numeros) << endl;
    cout << "Media: " << media(numeros) << endl;
    maiorEMenor(numeros);

    int alvo = 8;
    cout << "Ocorrencias de " << alvo << ": " << contarOcorrencias(numeros, alvo) << endl;

    if (existe(numeros, 20))
        cout << "20 esta presente.\n";
    else
        cout << "20 nao esta presente.\n";

    removerNumero(numeros, 8);
    cout << "Apos remover 8: ";
    for (int x : numeros) cout << x << " ";
    cout << endl;

    removerRepetidos(numeros);
    cout << "Apos remover repetidos: ";
    for (int x : numeros) cout << x << " ";
    cout << endl;

    return 0;
}
