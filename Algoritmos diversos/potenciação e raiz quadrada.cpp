/*
Faça um programa que leia um conjunto não determinado de valores,
um de cada vez, e escreva, para cada valor lido:

- o quadrado do número;
- o cubo do número;
- a raiz quadrada do número.

A entrada de dados deve ser finalizada quando for digitado
um valor negativo ou igual a zero.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>

using std::cout;
using std::endl;
using std::cin;
using std::fixed;
using std::setprecision;

double quadrado(double a){
    return a * a;
}

double cubo(double a){
    return a * a * a;
}

double raizQuadrada(double a){
    return sqrt(a);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    cout << fixed << setprecision(2);

    double num;

    do{
        cout << "Insira um número (0 ou negativo para finalizar): ";
        cin >> num;

        if(num <= 0){
            cout << "Programa encerrado." << endl;
            break;
        }

        cout << "Quadrado: " << quadrado(num) << endl;
        cout << "Cubo: " << cubo(num) << endl;
        cout << "Raiz quadrada: " << raizQuadrada(num) << endl;

    } while(true);

    return 0;
}
