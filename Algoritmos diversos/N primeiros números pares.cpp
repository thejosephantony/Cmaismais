/*Faça um programa que leia um número inteiro N e depois imprima os N primeiros
números naturais pares.*/


#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;


int main(){
    setlocale(LC_ALL, "Portuguese");

    int N;
    int par = 0;

    cout << "Informe um inteiro N: ";
    cin >> N;

    for(int i = 0; i <= N; i++){
        cout << i << "º par = " << par << endl;
        par = par + 2;
    }
    return 0;
}
