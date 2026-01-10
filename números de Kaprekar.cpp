/*
Escreva um programa que verifique quais números entre 1000 e 9999 (inclusive)
possuem a seguinte propriedade:

A soma dos dois dígitos de menor ordem com os dois dígitos de maior ordem,
elevada ao quadrado, é igual ao próprio número.

Por exemplo, para o inteiro 3025, temos:
30 + 25 = 55
55² = 3025
*/


#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int menorOrdem;
    int maiorOrdem;
    int soma;
    int quadrado;

    for(int i = 1000; i <= 9999; i++){
        menorOrdem = i % 100;
        maiorOrdem = i / 100;
        soma = menorOrdem + maiorOrdem;
        quadrado = soma * soma;

        if(quadrado == i){
            cout << i << " é um número de Kaprekar" << endl;
        }

    }
    return 0;
}
