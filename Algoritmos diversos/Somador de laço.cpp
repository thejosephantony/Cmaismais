/*Faça um programa que peça ao usuário para digitar 10 valores e some-os*/


#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num;
    int somador = 0;

    cout << "-----------SOMA DE DEZ NÚMEROS-----------" << endl;
    for (int i = 1; i <= 10; i++){
        cout << "Insira um número: ";
        cin >> num;

        somador+=num;
    }

    cout << "A soma dos 10 números é: " << somador << endl;

    return 0;
}
