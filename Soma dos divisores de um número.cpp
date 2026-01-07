/*
Escreva um programa que leia um número inteiro e calcule a soma
de todos os divisores desse número, com exceção dele próprio.

Exemplo:
A soma dos divisores do número 66 é:
1 + 2 + 3 + 6 + 11 + 22 + 33 = 78
*/


#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num;
    int somaDivisores = 0;

    cout << "Insira um número: ";
    cin >> num;

    if(num <= 0){
        cout << "ERRO. O número deve ser positivo." << endl;
        return 1;
    }

    if(num == 1){
    cout << "O número 1 não possui divisores próprios." << endl;
    return 0;
}


    for(int i = 1; i <= num/2; i++){
        if(num % i == 0){
            cout << i << endl;
            somaDivisores+=i;
        }
    }
    cout << "A soma dos divisores de " << num << " = " << somaDivisores << endl;
    return 0;
}
