/*Calculadora de comissão de vendas. Uma grande
companhia química paga seus vendedores por comissão.
Os vendedores recebem R$ 200,00 por semana, mais 9
por cento de suas vendas brutas nessa semana. Por exem
plo, um vendedor que comercialize R$ 5.000,00 em pro
dutos químicos em uma semana receberá R$ 200,00 e
mais 9 por cento de R$ 5.000,00, ou seja, receberá um
total de R$ 650,00. Desenvolva um programa que peça os
valores brutos de cada vendedor na semana que passou,
calcule e apresente o valor que esse vendedor deverá rece
ber. Processe os valores referentes a um vendedor por vez.
Veja um exemplo do diálogo de entrada/saída:*/

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

    double valoresVenda;
    double pagamento;
    const double valorFixo = 200.00;
    const double percentual = 0.09;

    cout << fixed << setprecision(2);

    while(true){
        cout << "Informe a venda em reais (-1 para terminar): ";
        cin >> valoresVenda;

        if(valoresVenda == -1){
            break;
        }
        if(valoresVenda <= 0){
            cout << "ERRO. Não existe venda com valor negativo." << endl;
            continue;
        }
        pagamento = valorFixo + valoresVenda * percentual;
        cout << "O pagamento é de: R$" << pagamento << endl;
    }
    return 0;


}
