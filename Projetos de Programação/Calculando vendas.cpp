/*Uma empresa de pedidos pelo correio vende cinco produtos diferentes cujos preços de varejo são: produto 1 — $ 2,98, produto 2 — $ 4,50,
produto 3 — $ 9,98, produto 4 — $ 4,49 e produto 5 — $ 6,87.  Escreva um programa que lê uma série de pares de números como mostrado
a seguir:
a) número de produto
b) quantidade vendida
 Seu programa deve utilizar uma instrução switch para determinar o preço de varejo de cada produto. Seu programa deve calcular e exibir
o valor de varejo total de todos os produtos vendidos. Utilize um loop controlado por sentinela para determinar quando o programa deve
parar o loop e exibir os resultados finais*/


#include <iostream>
#include <iomanip>
#include <locale>

using std::cout;
using std::endl;
using std::cin;
using std::fixed;
using std::setprecision;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numProduto;
    int qtdVendida;

    double valorRevenda1 = 0;
    double valorRevenda2 = 0;
    double valorRevenda3 = 0;
    double valorRevenda4 = 0;
    double valorRevenda5 = 0;

    cout << fixed << setprecision(2);

    do {
        cout << "Informe o número do produto (1-5) ou 0 para sair: ";
        cin >> numProduto;

        if (numProduto == 0) {
            break;
        }

        if (numProduto < 1 || numProduto > 5) {
            cout << "ERRO. Número do produto inválido." << endl;
            continue;
        }

        cout << "Informe a quantidade vendida: ";
        cin >> qtdVendida;

        double venda = 0;

        switch (numProduto) {
            case 1:
                venda = 2.98 * qtdVendida;
                valorRevenda1 += venda;
                break;
            case 2:
                venda = 4.50 * qtdVendida;
                valorRevenda2 += venda;
                break;
            case 3:
                venda = 9.98 * qtdVendida;
                valorRevenda3 += venda;
                break;
            case 4:
                venda = 4.49 * qtdVendida;
                valorRevenda4 += venda;
                break;
            case 5:
                venda = 6.87 * qtdVendida;
                valorRevenda5 += venda;
                break;
        }

    } while (true);

    cout << "\n============= VALOR DE REVENDA TOTAL =============" << endl;
    cout << "Produto 1: R$" << valorRevenda1 << endl;
    cout << "Produto 2: R$" << valorRevenda2 << endl;
    cout << "Produto 3: R$" << valorRevenda3 << endl;
    cout << "Produto 4: R$" << valorRevenda4 << endl;
    cout << "Produto 5: R$" << valorRevenda5 << endl;

    return 0;
}
