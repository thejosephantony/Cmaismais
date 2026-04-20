/* Umaempresacontrata um encanador a R$30,00 por dia. Fac¸a um programa que solicite
o n´umero de dias trabalhados pelo encanador e imprima a quantia l´ ıquida que dever´ a ser
paga, sabendo-se que s˜ ao descontados 8% para imposto de renda.*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;


int main() {
    double salarioBruto;
    double salarioLiquido;
    const double impostoRenda = 0.08;
    int numDias;
    const double salarioDia = 30.00;

    cout << "Quantos dias o encanador trabalhou?" << endl;
    cin >> numDias;

    cout << std::fixed << std::setprecision(2);

    salarioBruto = (numDias*salarioDia);
    salarioLiquido = salarioBruto - salarioBruto*impostoRenda;

    cout << "Salario Liquido: " << salarioLiquido << endl;


    return 0;

}
