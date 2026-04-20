/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS
8%). Faça um programa em que o usuario entre com o valor e o estado destino do
produto e o programa retorne o preço final do produto acrescido do imposto do estado
em que ele será vendido. Se o estado digitado n˜ao for válido, mostrar uma mensagem
de erro.*/

#include <iostream>
#include <iomanip>
#include <locale>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;
using std::string;

int main(){
    setlocale(LC_ALL, "Portuguese");

    double valor;
    string estado;
    double precoFinal;

    double txSP = 0.12;
    double txRJ = 0.15;
    double txMG = 0.07;
    double txMS = 0.08;


    cout << "Qual o valor do produto? R$";
    cin >> valor;
    cin.ignore();
    cout << "Informe o estado de destino (SP, RJ, MG, MS): ";
    getline(cin, estado);

    cout << fixed << setprecision(2);

    if(estado == "SP" || estado == "São Paulo" || estado == "SÃO PAULO" || estado == "são paulo"){
        precoFinal = valor + txSP * valor;
        cout << "Valor inicial: R$" << valor << endl;
        cout << "Taxa em SP: " << txSP << endl;
        cout << "Preço final R$" << precoFinal << endl;
    }
    else if(estado == "RJ" || estado == "Rio de Janeiro" || estado == "RIO DE JANEIRO" || estado == "rio de janeiro"){
        precoFinal = valor + txRJ * valor;
        cout << "Valor inicial: R$" << valor << endl;
        cout << "Taxa em RJ: " << txRJ << endl;
        cout << "Preço final R$" << precoFinal << endl;
    }
    else if(estado == "MG" || estado == "Minas Gerais" || estado == "MINAS GERAIS" || estado == "minas gerais"){
    precoFinal = valor + txMG * valor;
        cout << "Valor inicial: R$" << valor << endl;
        cout << "Taxa em MG: " << txMG << endl;
        cout << "Preço final R$" << precoFinal << endl;
    }
    else if(estado == "MS" || estado == "Mato Grosso do Sul" || estado == "MATO GROSSO DO SUL" || estado == "mato grosso do sul"){
    precoFinal = valor + txMS * valor;
        cout << "Valor inicial: R$" << valor << endl;
        cout << "Taxa em MS: " << txMS << endl;
        cout << "Preço final R$" << precoFinal << endl;
    }
    else{
        cout << "ERRO. O estado informado não é válido." << endl;
    }

    return 0;

    }
