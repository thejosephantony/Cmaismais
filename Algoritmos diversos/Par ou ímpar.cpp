/*Par ou ímpar. Escreva um programa que inclua uma
série de inteiros e os passe um de cada vez à função
even, que usa o operador de módulo para determinar
se um inteiro é par. A função deverá usar um argumento
inteiro e retornar 1 se o inteiro for par, e retornar 0 se o
inteiro for ímpar. */

#include <iostream>
#include <locale>

using std::cout;
using std::endl;
using std::cin;

bool parOuImpar(int numero){
    return (numero % 2 == 0);
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int x;


    while(true){
        cout << "Informe um número: (0 para terminar): ";
        cin >> x;

        if(x == 0){
            cout << "Programa encerrado" << endl;
            break;
        }

        if(parOuImpar(x) == true){
            cout << x << " é par" << endl;
        }
        else{
            cout << x << " é ímpar" << endl;
        }
    }
    return 0;
}
