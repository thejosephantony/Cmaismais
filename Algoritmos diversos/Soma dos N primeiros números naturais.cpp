/*Faça um programa que leia um número inteiro positivo n e calcule a soma dos n primeiros
numeros naturais.*/


#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;


int main(){
    setlocale(LC_ALL, "Portuguese");

    int N;
    int soma = 0;

    cout << "Informe um número inteiro N: ";
    cin >> N;

    if(N <= 0){
        cout << "ERRO. O número deve ser positivo e maior que zero." << endl;
        return 1;
    }

    for(int i = 1; i <= N; i++){
        soma = soma + i;
    }
    cout << "A soma dos " << N << " primeiros números naturais é: " << soma << endl;
    return 0;
}
