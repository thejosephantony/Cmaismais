/*
Faça um programa que calcule a diferença entre a soma dos quadrados
dos primeiros 100 números naturais e o quadrado da soma.

Exemplo:
A soma dos quadrados dos dez primeiros números naturais é:
1² + 2² + 3² + ... + 10² = 385

O quadrado da soma dos dez primeiros números naturais é:
(1 + 2 + 3 + ... + 10)² = 55² = 3025

A diferença entre o quadrado da soma e a soma dos quadrados é:
3025 - 385 = 2640
*/

#include <iostream>
#include <locale>


using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int somaDosQuadrados = 0;
    int soma = 0;
    int quadradoDaSoma;
    int diferenca;

    for(int i = 1; i <= 100; i++){
        somaDosQuadrados += i * i;
        soma += i;
    }

    quadradoDaSoma = soma * soma;
    diferenca = quadradoDaSoma - somaDosQuadrados;

    cout << "Soma dos quadrados = " << somaDosQuadrados << endl;
    cout << "Quadrado da soma = " << quadradoDaSoma << endl;
    cout << "Diferença = " << diferenca << endl;

    return 0;
}
