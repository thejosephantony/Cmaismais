/*
Faça um programa que leia um valor inteiro e positivo N,
calcule e mostre o valor de E, conforme a fórmula:

E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
*/

#include <iostream>
#include <locale>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main() {
    setlocale(LC_ALL, "Portuguese");
    cout << fixed << setprecision(2);

    int N;
    double E = 1.0;
    int fatorial = 1;

    cout << "Digite um número inteiro e posiivo: ";
    cin >> N;

    if(N <= 0){
        cout << "ERRO. O número deve ser positivo e maior que zero" << endl;
        return 1;
    }

    for(int i = 1; i <= N; i++){
        fatorial*=i;
        E+=1.0/fatorial;
    }

    cout << "A constante E = " << E << endl;
    return 0;
}
