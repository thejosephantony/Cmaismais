/*Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente.*/


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
    }

    for(int i = 0; i <= N; i++){
        cout << i << "º número: " << i << endl;
    }
    return 0;

}
