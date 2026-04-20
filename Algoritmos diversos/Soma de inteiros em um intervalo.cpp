/*
Faça um programa que some os números ímpares contidos em um intervalo
definido pelo usuário.

O usuário deve informar o valor inicial e o valor final do intervalo,
e o programa deve somar todos os números ímpares contidos nesse intervalo.

Caso o usuário digite um intervalo inválido (iniciando com um valor
maior que o valor final), deverá ser exibida a mensagem:
"Intervalo de valores inválido"
e o programa será encerrado.

Exemplo de saída:
Digite o valor inicial e o valor final:
5
10
Soma dos ímpares neste intervalo: 21
*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int valorInicial;
    int valorFinal;
    int somaImpares = 0;

    cout << "Digite o valor inicial e o valor final: ";
    cin >> valorInicial >> valorFinal;

    if (valorInicial > valorFinal) {
        cout << "Intervalo de valores inválido" << endl;
        return 1;
    }

    for(int i = valorInicial; i <= valorFinal; i++){
        if (i % 2 != 0){
            somaImpares += i;
        }
    }

    cout << "Soma dos ímpares neste intervalo: " << somaImpares << endl;
    return 0;
}
