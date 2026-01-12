/*
Chico tem 1,50 metro de altura e cresce 2 centímetros por ano,
enquanto Zé tem 1,10 metro de altura e cresce 3 centímetros por ano.

Escreva um programa que calcule e imprima quantos anos
serão necessários para que Zé seja maior que Chico.
*/

#include <iostream>
#include <iomanip>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
    setlocale(LC_ALL, "Portuguese");
    cout << fixed << setprecision(2);
    double alturaChico = 1.50;
    double alturaZe = 1.10;
    const double crescimentoChico = 0.02;
    const double crescimentoZe = 0.03;
    int anos = 0;

    while(alturaZe < alturaChico){
        alturaChico+=crescimentoChico;
        alturaZe+=crescimentoZe;
        cout << "Ano " << anos
        << " | Chico: " << alturaChico
        << " | Ze: " << alturaZe << endl;
        anos++;
     }

    cout << "Altura final de Chico: " << alturaChico << endl;
    cout << "Altura final de Ze: " << alturaZe << endl;
    cout << "Número de anos necessários para Zé ultrapassar Chico: " << anos << " anos." << endl;


    return 0;
}
