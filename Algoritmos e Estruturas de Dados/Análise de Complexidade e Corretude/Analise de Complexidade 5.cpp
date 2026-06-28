/*
 * Analise de Complexidade 5.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#include <iostream>
#include <unordered_set>
#include <vector>

using std::cout;
using std::endl;
using std::unordered_set;
using std::vector;

bool buscaLinear(const vector<int>& v, int valor) {
    for (int x : v) {
        if (x == valor) {
            return true;
        }
    }
    return false;
}

/*
Melhor caso: O(1)
Caso médio: O(n)
Pior caso: O(n)
Memória: O(1)

*/

bool temDuplicadoLento(const vector<int>& v) {
    for (int i = 0; i < static_cast<int>(v.size()); i++) {
        for (int j = i + 1; j < static_cast<int>(v.size()); j++) {
            if (v[i] == v[j]) {
                return true;
            }
        }
    }

    return false;
}

/*
Melhor caso: O(1)
Caso médio: O(n²)
Pior caso: O(n²)
Memória: O(1)

*/


bool temDuplicadoRapido(const vector<int>& v) {
    unordered_set<int> vistos;

    for (int x : v) {
        if (vistos.count(x)) {
            return true;
        }

        vistos.insert(x);
    }

    return false;
}

/*
Melhor caso: O(1)
Caso médio: O(n)
Pior caso: O(n²)
Memória: O(n)

*/


vector<int> inverterNovo(const vector<int>& v) {
    vector<int> invertido;

    for (int i = static_cast<int>(v.size()) - 1; i >= 0; i--) {
        invertido.push_back(v[i]);
    }

    return invertido;
}

/*
Melhor caso: O(n)
Caso médio: O(n)
Pior caso: O(n)
Memória: O(n)

*/

void inverterNoLugar(vector<int>& v) {
    int inicio = 0;
    int fim = static_cast<int>(v.size()) - 1;

    while (inicio < fim) {
        int temp = v[inicio];
        v[inicio] = v[fim];
        v[fim] = temp;

        inicio++;
        fim--;
    }
}
/*
Melhor caso: O(n)
Caso médio: O(n)
Pior caso: O(n)
Memória: O(1)

*/


void mostrarVector(const vector<int>& v) {
    for (int x : v) {
        cout << x << " ";
    }

    cout << endl;
}
/*
Melhor caso: O(n)
Caso médio: O(n)
Pior caso: O(n)
Memória: O(1)

*/


int main() {
    vector<int> numeros = {10, 20, 30, 40, 20};

    cout << "Busca 30: "
         << (buscaLinear(numeros, 30) ? "Sim" : "Nao") << endl;

    cout << "Tem duplicado lento? "
         << (temDuplicadoLento(numeros) ? "Sim" : "Nao") << endl;

    cout << "Tem duplicado rapido? "
         << (temDuplicadoRapido(numeros) ? "Sim" : "Nao") << endl;

    cout << endl;

    cout << "Vector original:" << endl;
    mostrarVector(numeros);

    vector<int> novo = inverterNovo(numeros);

    cout << "Invertido em novo vector:" << endl;
    mostrarVector(novo);

    inverterNoLugar(numeros);

    cout << "Invertido no proprio vector:" << endl;
    mostrarVector(numeros);

    return 0;
}
