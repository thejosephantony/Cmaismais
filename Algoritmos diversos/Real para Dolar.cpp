/*Leia um valor em real e a cotacao do dolar. Em seguida, imprima o valor correspondente
em dolares*/


#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main() {
    double dolar;
    double real;
    double cotacao;

    cout << "Digite o valor em reais (R$): " << endl;
    cin >> real;

    cout << "Digite a cotação do dólar: " << endl;
    cin >> cotacao;

    dolar = real/cotacao;

    cout << std::fixed << std::setprecision(2) << endl;

    cout << "R$" << real << " reais é igual a $" << dolar << " dolares" << endl;

    return 0;

}
