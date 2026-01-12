/*
O funcionário chamado Carlos tem um colega chamado João que recebe um salário
equivalente a um terço do salário de Carlos.

Carlos aplica integralmente seu salário em uma caderneta de poupança,
que rende 2% ao mês.

João aplica integralmente seu salário em um fundo de renda fixa,
que rende 5% ao mês.

Construa um programa que calcule e mostre a quantidade de meses
necessários para que o valor pertencente a João iguale ou ultrapasse
o valor pertencente a Carlos.

O programa também deve permitir testar outros valores para as taxas
de rendimento.
*/

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
    cout << fixed << setprecision(2);

    double salarioCarlos;
    double salarioJoao;
    int meses = 0;

    double rendimentoCarlos = 0.02;
    double rendimentoJoao   = 0.05;

    cout << "Informe o salário de Carlos: R$ ";
    cin >> salarioCarlos;

    salarioJoao = salarioCarlos / 3.0;

    while (salarioJoao < salarioCarlos) {
        salarioCarlos *= (1 + rendimentoCarlos);
        salarioJoao   *= (1 + rendimentoJoao);
        meses++;
    }

    cout << "\nValor final de Carlos: R$ " << salarioCarlos << endl;
    cout << "Valor final de João:   R$ " << salarioJoao << endl;
    cout << "Meses necessários: " << meses << endl;

    return 0;
}
