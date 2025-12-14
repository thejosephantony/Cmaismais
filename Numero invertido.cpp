/* Fac¸a um programa que leia um n´umero inteiro positivo de trˆ es d´ ıgitos (de 100 a 999).
Gere outro n´umero formado pelos d´ ıgitos invertidos do n´umero lido. Exemplo: 123 vira 321*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int numLido;
    int numGerado;
    int a;
    int b;
    int c;

    cout << "Informe um numero entre (100-999): " << endl;
    cin >> numLido;

    if (numLido >= 100 && numLido <= 999){
        a = numLido / 100;
        b = (numLido % 100) /10;
        c = ((numLido % 100) % 10);

        cout << "Numero gerado: " << c << b << a << endl;

    }
    else{
        cout << "Numero invalido." << endl;
    }
    return 0;


}
