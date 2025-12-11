/*Leia o sal´ ario de um funcion´ ario. Calcule e imprima o valor do novo sal´ ario, sabendo que
ele recebeu um aumento de 25%.*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    double salarioAtual;
    double novoSalario;

    const double percentualAumento= 0.25;

    cout << "Salario Atual: " << endl;
    cin >> salarioAtual;

    cout << std::fixed << std::setprecision(2) << endl;

    novoSalario = salarioAtual + (salarioAtual * percentualAumento);

    cout << "Novo Salario: R$" << novoSalario << endl;

    return 0;

}
