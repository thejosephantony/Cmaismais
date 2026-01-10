/*Questão 1 — Contagem e soma seletiva

Faça um programa que leia vários números inteiros positivos do teclado.
O programa deve:

contar quantos números foram lidos;

somar apenas os números múltiplos de 4.

A leitura termina quando o usuário digitar 0.

Ao final, mostre:

a quantidade de números lidos;

a soma dos múltiplos de 4.*/


#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num;
    int somaMultiplos4 = 0;
    int cont = 0;

    while(true){

    cout << "Informe um número positivo (0 para encerrar): ";
    cin >> num;

    if(num == 0){
        cout << "Programa encerrado." << endl;
        break;
    }
    if(num < 0){
        cout << "ERRO. O número deve ser positivo." << endl;
        continue;
    }
    if(num % 4 == 0){
        somaMultiplos4+=num;
    }
    cont++;
    }
    cout << "Números lidos: " << cont << endl;
    cout << "A soma dos múltiplos de 4 = " << somaMultiplos4 << endl;

    return 0;
}
