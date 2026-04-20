/*Fac¸a um programa para ler as dimens˜ oes de um terreno (comprimento c e largura l),
bem como o prec¸o do metro de tela p. Imprima o custo para cercar este mesmo terreno
com tela*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
    double comprimento;
    double largura;
    double precoMetro;
    double custo;

    cout << "Informe o comprimento: " << endl;
    cin >> comprimento;

    cout << "Informe a largura: " << endl;
    cin >> largura;

    cout << "Informe o preco por metro: R$" << endl;
    cin >> precoMetro;

    custo = precoMetro * (2*largura + 2*comprimento);

    cout << fixed << setprecision(2) << endl;

    cout << "O custo total para cercar o terrero eh: R$" << custo << endl;

    return 0;


}

