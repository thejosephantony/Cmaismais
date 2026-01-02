/*Calculadora de juros. Os juros simples sobre um
empréstimo são calculados a partir da fórmula
juros = principal * taxa * dias / 365;
Essa fórmula considera que taxa seja a taxa de juros
anual e, portanto, inclui a divisão por 365 (dias). Desen
volva um programa que aceite principal, taxa e dias
para vários empréstimos, calcule e apresente os juros sim
ples para cada empréstimo, usando a fórmula apresenta
da. Veja um exemplo do diálogo de entrada/saída:*/


#include <iostream>
#include <locale>
#include <iomanip>
#include <cmath>


using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;


int main(){
    setlocale(LC_ALL, "Portuguese");

    double principal;
    double taxa;
    double juros;
    int dias;

    cout << fixed << setprecision(2);

    while(true){
        cout << "Informe o valor principal do empréstimo (-1 para terminar): ";
        cin >> principal;

        if(principal == -1){
            break;
        }

        cout << "Informe a taxa de juros: ";
        cin >> taxa;

        cout << "Informe o prazo do empréstimo em dias: ";
        cin >> dias;

        juros = principal * taxa * dias/365;

        cout << "O valor dos juros é de R$" << juros << endl;

    }
    return 0;
}
