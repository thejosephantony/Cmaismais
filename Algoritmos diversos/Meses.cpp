/*Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mˆ es
correspondente a este numero. Isto ´ e, janeiro se 1, fevereiro se 2, e assim por diante.*/

#include <iostream>
#include <locale>
using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int mes;
    cout << "Informe um número: " << endl;
    cin >> mes;

    switch(mes){
        case 1: cout << "Janeiro" << endl;
        break;
        case 2: cout << "Fevereiro" << endl;
        break;
        case 3: cout << "Março" << endl;
        break;
        case 4: cout << "Abril" << endl;
        break;
        case 5: cout << "Maio" << endl;
        break;
        case 6: cout << "Junho" << endl;
        break;
        case 7: cout << "Julho" << endl;
        break;
        case 8: cout << "Agosto" << endl;
        break;
        case 9: cout << "Setembro" << endl;
        break;
        case 10: cout << "Outubro" << endl;
        break;
        case 11: cout << "Novembro" << endl;
        break;
        case 12: cout << "Dezembro" << endl;
        break;
        default:
            cout << "O número não corresponde a um mês válido" << endl;

    }
    return 0;

}
