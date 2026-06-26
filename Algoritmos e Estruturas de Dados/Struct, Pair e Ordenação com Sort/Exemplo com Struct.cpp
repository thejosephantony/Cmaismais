/*
 * Exemplo com Struct.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

struct Aluno {
    string nome;
    long long matricula;
    double nota;
};

void mostrarAluno(const Aluno& aluno) {
    cout << "Nome: " << aluno.nome << endl;
    cout << "Matricula: " << aluno.matricula << endl;
    cout << "Nota: " << aluno.nota << endl;
}

int main() {
    Aluno aluno = {"Joseph", 202300038780, 8.5};

    mostrarAluno(aluno);

    return 0;
}
