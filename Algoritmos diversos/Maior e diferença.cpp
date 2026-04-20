/* Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior deles,
assim como a diferenca existente entre ambos.*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main(){

    int a;
    int b;
    int maior;
    int diferenca;

    cout << "Insira dois numeros: " << endl;
    cin >> a >> b;

    if (a > b){
        maior = a;
        cout << maior << " eh o maior: " << maior << " > " << b << endl;
    }
    else if (a < b){
        maior = b;
        cout << maior << " eh o maior: " << maior << " > " << a << endl;
    }
    else{
        cout << "Os numeros sao iguais:  "<< a << " = " << b << endl;
    }

    diferenca = a - b;
    cout << "A diferenca entre eles eh: " << a << " - " << b << " = " << diferenca << endl;
    return 0;
}
