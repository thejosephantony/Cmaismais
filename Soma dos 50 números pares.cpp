/*Faça um programa que calcule e mostre a soma dos 50 primeiros números pares*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int soma = 0;
    int par = 0;

    for(int i = 1; i <= 50; i++){
        par = par + 2;
        soma = soma + par;
    }
    cout << "A soma dos 50 primeiros números pares é: " << soma << endl;
    return 0;
}
