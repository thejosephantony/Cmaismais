/* Fac¸a um programa que leia o valor da hora de trabalho (em reais) e n´umero de horas
trabalhadas no mˆ es. Imprima o valor a ser pago ao funcion´ ario, adicionando 10% sobre
o valor calculado.*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;


int main(){
    double salarioHora;
    int numHorasTrabalhadas;
    double salarioLiquido;
    const double adicional = 1.10;

    cout << "Qual o valor da hora-trabalho? em reais" << endl;
    cin >> salarioHora;

    cout << "Digite o numero de horas trabalhadas no mes: " << endl;
    cin >> numHorasTrabalhadas;

    cout << std::fixed << std::setprecision(2) << endl;

    salarioLiquido = salarioHora * numHorasTrabalhadas * adicional;

    cout << "O valor a ser pago ao funcionario: R$" << salarioLiquido << endl;

    return 0;

}
