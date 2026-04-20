/* Faca um programa que leia um numero e, caso ele seja positivo, calcule e mostre:
• O numero digitado ao quadrado
• A raiz quadrada do numero digitado*/

#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
    double num;
    double raizQuadrada;
    double potencia;

    cout << "Digite um numero: " << endl;
    cin >> num;

    cout << fixed << setprecision(2);

    if (num >= 0){
        raizQuadrada = sqrt(num);
        potencia = pow(num, 2);

        cout << "Raiz Quadrada de " << num << " = " << raizQuadrada << endl;
        cout << "Potencia ao quadrado de " << num << " = " << potencia << endl;

    }
    return 0;

}
