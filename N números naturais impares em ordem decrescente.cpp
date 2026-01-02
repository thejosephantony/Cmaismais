/*Faça um programa que leia um número inteiro positivo ímpar N e imprima todos os
números ímpares de 1 até N em ordem decrescente.*/

#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int N;

    cout << "Insira um inteiro N: ";
    cin >> N;

    cout << "======INÍCIO=====" << endl;

    if(N <= 0){
        cout << "ERRO. O número deve ser positivo." << endl;
        return 1;
    }
    if(N % 2 == 0){
        cout << "ERRO. O número deve ser par." << endl;
        return 1;
    }

    for(int i = N; i > 0; i = i - 2){
        cout << i << endl;
    }
    cout << "=======FIM=======" << endl;
    return 0;
}
