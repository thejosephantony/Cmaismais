/*Um palíndromo é um número, ou uma frase textual, que pode ser lido da mes
ma forma da esquerda para a direita e vice-versa. Por
exemplo, cada um dos seguintes inteiros de cinco dígitos
é um palíndromo: 12321, 55555, 45554 e 11611. Escre
va um programa que leia um inteiro de cinco dígitos e
determine se ele é ou não um palíndromo. [Dica: use os
operadores de divisão e módulo para separar o número
em seus dígitos individuais.]*/


#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){

    setlocale(LC_ALL, "Portuguese");
    int num;

    int d1;
    int d2;
    int d3;
    int d4;
    int d5;

    cout << "Insira um inteiro: ";
    cin >> num;

    if (num < 10000 || num > 99999){
        cout << "ERRO. O número deve ter cinco (5) digítos." << endl;
        return 1;
    }

    d1 = num / 10000;
    d2 = (num % 10000)/1000;
    d3 = ((num % 10000) % 1000)/100;
    d4 = (((num % 10000) % 1000) % 100)/10;
    d5 = ((((num % 10000) % 1000) % 100) % 10)/1;

    if((d1 == d5) && (d2 == d4)){
        cout << num << " é palíndromo" << endl;
    }
    else{
        cout << num << " não é palíndromo" << endl;
    }
    return 0;

}
