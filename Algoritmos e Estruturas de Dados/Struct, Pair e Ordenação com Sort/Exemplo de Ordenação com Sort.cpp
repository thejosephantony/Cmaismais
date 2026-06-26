/*
 * Exemplo de Ordenação com Sort.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::sort;
using std::string;
using std::vector;

struct Aluno {
    string nome;
    int matricula;
    double nota;
};

void mostrarAluno(const Aluno& aluno) {
    cout << "Nome: " << aluno.nome
         << " | Matricula: " << aluno.matricula
         << " | Nota: " << aluno.nota << endl;
}

void mostrarAlunos(const vector<Aluno>& alunos) {
    for (const Aluno& aluno : alunos) {
        mostrarAluno(aluno);
    }
}

int main() {
    vector<Aluno> alunos = {
        {"Ana", 1001, 9.0},
        {"Carlos", 1002, 7.5},
        {"Bruna", 1003, 8.8},
        {"Daniel", 1004, 6.5}
    };

    cout << "Antes da ordenacao:" << endl;
    mostrarAlunos(alunos);

    sort(alunos.begin(), alunos.end(), [](const Aluno& a, const Aluno& b) {
        return a.nota < b.nota;
    });

    cout << endl;
    cout << "Depois da ordenacao por nota crescente:" << endl;
    mostrarAlunos(alunos);

    return 0;
}

// complexidade: O(n log n)
