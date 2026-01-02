/*Faça um programa que leia um número inteiro positivo ímpar N e imprima todos os
números ímpares de 1 até N em ordem crescente.*/

#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    int N;

    cout << "Informe um número inteiro: ";
    cin >> N;

    if(N <= 0){
        cout << "ERRO. O número tem que ser positivo." << endl;
        return 1;
    }
    if(N % 2 == 0){
        cout << "ERRO. O número tem que ser ímpar." << endl;
        return 1;
    }

    for(int i = 1; i <= N; i+=2){
        cout << i << endl;
    }
    return 0;


}
