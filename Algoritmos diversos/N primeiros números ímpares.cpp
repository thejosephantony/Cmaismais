/*Faça um programa que leia um número inteiro N e depois imprima os N primeiros
números naturais ímpares.*/


#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int N;
    int numerosImpares;
    int impar = 1;

    cout << "Insira um número inteiro N: " << endl;
    cin >> N;

    for(int i = 1; i <= N; i++){
      cout << i << "º ímpar = " << impar << endl;;
      impar = impar + 2;
}
    return 0;

}
