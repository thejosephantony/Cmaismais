/*Questão 2 — Fatorial parcial

Faça um programa que leia um número inteiro positivo N.

Calcule e mostre:

a soma dos fatoriais dos números de 1 até N
(exemplo: 1! + 2! + 3! + ... + N!)

Se o usuário digitar um valor inválido (N <= 0), exiba uma mensagem de erro e finalize o programa.*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "portuguese");

    int N;
    int fatorial = 1;
    int somaFatorial = 0;

    cout << "Informe um número N: ";
    cin >> N;

    if(N <= 0){
        cout << "ERRO. O número deve ser positivo" << endl;
        return 1;
    }

    for(int i = 1; i <= N; i++){
        fatorial*=i;
        somaFatorial+=fatorial;
    }

    cout << "A soma do fatoriais de 1 até " << N << " = " << somaFatorial << endl;
    return 0;
}
