/*Invertendo dígitos. Escreva uma função que leia um
valor inteiro e retorne o número com seus dígitos inverti
dos. Por exemplo, dado o número 7631, a função deverá
retornar 1367.*/

#include <iostream>
#include <cmath>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int inverteNumero(int n) {
    int invertido = 0;
    int sinal = (n < 0) ? -1 : 1;
    n = abs(n);

    while (n != 0) {
        invertido = invertido * 10 + (n % 10);
        n /= 10;
    }

    return sinal * invertido;
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero;

    while(true){
    cout << "Insira um número (digite 0 para encerrar): ";
    cin >> numero;
    if(numero == 0){
        cout << "FIM. Programa encerrado." << endl;
        break;
    }

    cout << inverteNumero(numero) << endl;

    }
    return 0;
}
