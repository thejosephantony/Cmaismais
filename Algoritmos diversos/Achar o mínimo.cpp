/*Escreva um programa que insere três números de ponto flutuante com dupla precisão e os passa para uma função que retorna o menor
número.*/

#include <iostream>
#include <iomanip>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

double minimo(double a, double b, double c) {
    if (a <= b && a <= c) {
        return a;
    }
    else if (b <= a && b <= c) {
        return b;
    }
    else {
        return c;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    double num1, num2, num3;

    cout << fixed << setprecision(2);

    while (true) {
        cout << "Informe três números (digite três 0s para encerrar): ";
        cin >> num1 >> num2 >> num3;

        if (num1 == 0 && num2 == 0 && num3 == 0) {
            cout << "Programa encerrado." << endl;
            break;
        }

        double menor = minimo(num1, num2, num3);
        cout << "O menor número é: " << menor << endl;
    }

    return 0;
}
