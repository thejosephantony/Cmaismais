/*Média de uma sequência de inteiros. Escreva um
programa que calcule e imprima a média de vários inteiros.
Considere que o último valor lido com scanf seja a senti
nela 9999. Uma sequência de entrada típica poderia ser
10 8 11 7 9 9999
indicando que é preciso calcular a média de todos os va
lores anteriores a 9999.*/
#include <iostream>
#include <iomanip>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int soma = 0;
    int contador = 0;
    int x;

    cout << fixed << setprecision(2);

    while (true) {
        cout << "Informe um número: ";
        cin >> x;

        if (x == 9999) {
            break;
        }

        soma += x;
        contador++;
    }

    if (contador == 0) {
        cout << "Nenhum valor válido foi informado." << endl;
        return 1;
    }

    double media = static_cast<double>(soma) / contador;

    cout << "Soma:  " << soma << endl;
    cout << "Média: " << media << endl;

    return 0;
}
