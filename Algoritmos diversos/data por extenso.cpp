/*Faça uma funcão que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela
no formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de
2000.*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

void data(int dia, int mes, int ano){
    switch(mes){
        case 1:
            cout << dia << " de janeiro de " << ano << endl;
            break;
        case 2:
            cout << dia << " de fevereiro de " << ano << endl;
            break;
        case 3:
            cout << dia << " de março de " << ano << endl;
            break;
        case 4:
            cout << dia << " de abril de " << ano << endl;
            break;
        case 5:
            cout << dia << " de maio de " << ano << endl;
            break;
        case 6:
            cout << dia << " de junho de " << ano << endl;
            break;
        case 7:
            cout << dia << " de julho de " << ano << endl;
            break;
        case 8:
            cout << dia << " de agosto de " << ano << endl;
            break;
        case 9:
            cout << dia << " de setembro de " << ano << endl;
            break;
        case 10:
            cout << dia << " de outubro de " << ano << endl;
            break;
        case 11:
            cout << dia << " de novembro de " << ano << endl;
            break;
        case 12:
            cout << dia << " de dezembro de " << ano << endl;
            break;
        default:
            cout << "Mês inválido" << endl;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int dia;
    int mes;
    int ano;

    cout << "Insira o dia: ";
    cin >> dia;
    cout << "Insira o mês: ";
    cin >> mes;
    cout << "Insira o ano: ";
    cin >> ano;

    data(dia, mes, ano);

    return 0;

}
