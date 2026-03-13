/*Faça uma funcão que receba 3 números inteiros como parâmetro, representando horas,
minutos e segundos, e os converta em segundos.*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int conversaoSegundos(int horas, int minutos, int segundos){

    return (horas * 60 * 60) + (minutos * 60) + segundos;

}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int hrs;
    int mins;
    int seg;
    int totalSegundos;

    cout << "Insira as horas: ";
    cin >> hrs;

    cout << "Insira os minutos: ";
    cin >> mins;

    cout << "Insira os segundos: ";
    cin >> seg;

    if (mins < 0 || mins >= 60 || seg < 0 || seg >= 60 || hrs < 0) {
    cout << "Tempo inválido!" << endl;
    return 1;
}

    totalSegundos = conversaoSegundos(hrs, mins, seg);

    cout << "O total de segundos é: " << totalSegundos << endl;

    return 0;
}
