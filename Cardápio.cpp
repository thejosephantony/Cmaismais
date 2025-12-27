/*Escrever um programa que leia o código do produto escolhido do cardápio de uma lanchonete e a quantidade.
O programa deve calcular o valor a ser pago por aquele lanche.
Considere que a cada execucão somente será calculado um pedido.*/

#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
    setlocale(LC_ALL, "Portuguese");

    double valorPagar;
    int codigo;
    int quantidade;

    cout << "Insira o código do produto: ";
    cin >> codigo;

    if(codigo < 100 || codigo > 106){
        cout << "ERRO. Código inválido." << endl;
        return 1;
    }

    cout << "Insira a quantidade: ";
    cin >> quantidade;
    if(quantidade <= 0){
        cout << "ERRO. Quantidade inválida." << endl;
        return 1;
    }

    cout << fixed << setprecision(2);

    if(codigo == 100){
        cout << "Código: " << codigo << endl;
        cout << "Especificação: Cachorro-Quente" << endl;
        cout << "Preço: R$" << 1.20 << endl;
        cout << "Quantidade: " << quantidade << endl;
        const double preco = 1.20;
        valorPagar = quantidade * preco;
        cout << "Valor a pagar: R$" << valorPagar << endl;
    }
    else if(codigo == 101){
        cout << "Código: " << codigo << endl;
        cout << "Especificação: Bauro Simples" << endl;
        cout << "Preço: R$" << 1.30 << endl;
        cout << "Quantidade: " << quantidade << endl;
        const double preco = 1.30;
        valorPagar = quantidade * preco;
        cout << "Valor a pagar: R$" << valorPagar << endl;
    }
    else if(codigo == 102){
        cout << "Código: " << codigo << endl;
        cout << "Especificação: Bauro com Ovo" << endl;
        cout << "Preço: R$" << 1.50 << endl;
        cout << "Quantidade: " << quantidade << endl;
        const double preco = 1.50;
        valorPagar = quantidade * preco;
        cout << "Valor a pagar: R$" << valorPagar << endl;
    }
    else if(codigo == 103){
        cout << "Código: " << codigo << endl;
        cout << "Especificação: Hamburguer" << endl;
        cout << "Preço: R$" << 1.20 << endl;
        cout << "Quantidade: " << quantidade << endl;
        const double preco = 1.20;
        valorPagar = quantidade * preco;
        cout << "Valor a pagar: R$" << valorPagar << endl;
    }
    else if(codigo == 104){
        cout << "Código: " << codigo << endl;
        cout << "Especificação: Cheeseburguer" << endl;
        cout << "Preço: R$" << 1.70 << endl;
        cout << "Quantidade: " << quantidade << endl;
        const double preco = 1.70;
        valorPagar = quantidade * preco;
        cout << "Valor a pagar: R$" << valorPagar << endl;
    }
    else if(codigo == 105){
        cout << "Código: " << codigo << endl;
        cout << "Especificação: Suco" << endl;
        cout << "Preço: R$" << 2.20 << endl;
        cout << "Quantidade: " << quantidade << endl;
        const double preco = 2.20;
        valorPagar = quantidade * preco;
        cout << "Valor a pagar: R$" << valorPagar << endl;
    }
    else{
        cout << "Código: " << codigo << endl;
        cout << "Especificação: Refrigerante" << endl;
        cout << "Preço: R$" << 1.00 << endl;
        cout << "Quantidade: " << quantidade << endl;
        const double preco = 1.00;
        valorPagar = quantidade * preco;
        cout << "Valor a pagar: R$" << valorPagar << endl;
    }


    return 0;
}
