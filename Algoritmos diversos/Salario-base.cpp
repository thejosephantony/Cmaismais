/*Receba o salario-base de um funcionario. Calcule e imprima o salario a receber, sabendo
se que esse funcionario tem uma gratificacao de 5% sobre o salario-base. Alem disso,
ele paga 7% de imposto sobre o salario-base.*/


#include <iostream>
#include <iomanip>


using std::cin;
using std::cout;
using std::endl;

int main(){

    double salarioBase;
    double salarioReceber;

    const double gratificacao = 0.05;
    const double imposto = 0.07;

    cout << "Qual o salario base? R$" << endl;
    cin >> salarioBase;

    cout << std::fixed << std::setprecision(2) << endl;

    salarioReceber = salarioBase + salarioBase*gratificacao - salarioBase*imposto;
    cout << "Salario a receber: R$" << salarioReceber << endl;

    return 0;

}

