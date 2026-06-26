/*
 * Vector de Struct.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */


#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

struct Aluno {
    string nome;
    long long matricula;
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
        {"Barbara", 20230001010, 9.0},
        {"Maria", 20240001001, 7.5},
        {"Yasmim", 2400402002, 8.8}
    };

    mostrarAlunos(alunos);

    return 0;
}
