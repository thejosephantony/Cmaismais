/* Escreva um programa que leia um n´umero inteiro maior do que zero e devolva, na tela, a
soma de todos os seus algarismos. Por exemplo, ao n´umero 251 corresponder´ a o valor
8 (2 + 5 + 1). Se o n´umero lido n˜ ao for maior do que zero, o programa terminar´ a com a
mensagem “N´umero inv´ alido”.*/

#include <iostream>
#include <iomanip>

using std::endl;
using std::cout;
using std::cin;

#include <iostream>

using std::endl;
using std::cout;
using std::cin;

int main() {
    int num;
    int algarismo1, algarismo2, algarismo3, algarismo4;
    int soma;

    cout << "Informe o numero inteiro: ";
    cin >> num;

    if (num > 0) {
        if (num < 10) {

            soma = num;
            cout << "Soma: " << num << " = " << soma << endl;
        }
        else if (num < 100) {

            algarismo1 = num / 10;
            algarismo2 = num % 10;
            soma = algarismo1 + algarismo2;
            cout << "Soma: " << algarismo1 << " + " << algarismo2 << " = " << soma << endl;
        }
        else if (num < 1000) {

            algarismo1 = num / 100;
            algarismo2 = (num % 100) / 10;
            algarismo3 = num % 10;
            soma = algarismo1 + algarismo2 + algarismo3;
            cout << "Soma: " << algarismo1 << " + " << algarismo2 << " + " << algarismo3 << " = " << soma << endl;
        }
        else {

            cout << "Numero muito grande para esta versao do programa." << endl;
        }
    }
    else {
        cout << "Numero invalido." << endl;
    }

    return 0;
}
