/*Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem decrescente.*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int N;

    cout << "Insira um número inteiro positivo N: " << endl;
    cin >> N;

    if(N <= 0){
        cout << "ERRO. O número deve ser maior que 0." << endl;
        return 1;
    }

    for(int i = N; i >= 0; i--){
        cout << i << "º número: " << i << endl;
    }
    cout << "====FIM====" << endl;
    return 0;

}
