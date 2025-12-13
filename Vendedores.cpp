/*Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
• o total a pagar com desconto de 10%;
• o valor de cada parcela, no parcelamento de 3× sem juros;
• a comiss˜ao do vendedor, no caso da venda ser a vista (5% sobre o valor com des
conto)
• a comiss˜ao do vendedor, no caso da venda ser parcelada (5% sobre o valor total)*/


#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;


int main() {

    double valorTotal;
    double valorPagar;      // com desconto
    double valorParcelado;  // 3x sem juros
    double comissaoAvista;
    double comissaoParcelado;



    const double COMISSAOaVISTA = 0.05;    // sobre o valor de desconto
    double COMISSAOaPARCELADO = 0.05;       // sobre o valor total
    const double DESCONTO = 0.1;
    const int NUMERO_PARCELAS = 3;

    cout << "Infome o valor total da compra: R$" << endl;
    cin >> valorTotal;

    cout << fixed << setprecision(2);

    valorPagar = valorTotal * (1  - DESCONTO);
    valorParcelado = valorTotal/NUMERO_PARCELAS;  // considera que o parcelamento seja 3x

    comissaoAvista = valorPagar * COMISSAOaVISTA;
    comissaoParcelado = valorTotal * COMISSAOaPARCELADO;

    cout << "Total a pagar com desconto(10%): R$" << valorPagar << endl;
    cout << "O valor de cada parcela (3x sem juros): R$" << valorParcelado << endl;
    cout << "Comissao em venda a vista: R$" << comissaoAvista << endl;;
    cout << "Comissao em venda parcelada: R$" << comissaoParcelado << endl;


    return 0;



}

