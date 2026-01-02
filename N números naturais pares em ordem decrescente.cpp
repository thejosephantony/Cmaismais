/*Faça um programa que leia um número inteiro positivo par N e imprima todos os números
pares de 0 até N em ordem decrescente.*/


#include <iostream>
#include <locale>

using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");

    int N;

    cout << "Insira um inteiro N: ";
    cin >> N;

    if(N <= 0){
        cout << "ERRO. O inteiro deve ser positivo e maior que zero." << endl;
        return 1;
    }

    if(N % 2 != 0){
        cout << "ERRO. O inteiro deve ser par." << endl;
        return 1;
    }

    cout << "======INÍCIO======" << endl;

    for(int i = N; i >= 0; i-=2){
        cout << i << endl;
    }
    cout << "=======FIM=======" << endl;
    return 0;

}
