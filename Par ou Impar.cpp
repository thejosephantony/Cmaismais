/*Faca um programa que receba um numero inteiro e verifique se este numero e par ou ımpar.*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int numero;

    cout << "Digite um numero: " << endl;
    cin >> numero;

    if (numero % 2 == 0){
        cout << numero << " eh par" << endl;
    }
    else{
        cout << numero << " eh impar" << endl;
    }
    return 0;

}
