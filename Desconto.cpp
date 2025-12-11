/*37. Fac¸a um programa que leia o valor de um produto e imprima o valor com desconto, tendo
em vista que o desconto foi de 12%*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    double valorproduto;
    double valorDesconto;

    const double desconto = 0.12;

    cout << "Valor do produto: " << endl;
    cin >> valorproduto;

    valorDesconto = valorproduto - (valorproduto * desconto);

    cout << std::fixed << std::setprecision(2) << endl;


    cout << "O valor com desconto: " << valorDesconto << endl;

    return 0;

}
