/*ROJETOS DE PROGRAMAÇÃO
1. Uma tonelada métrica, ou simplesmente tonelada, equivale a 35.273,92 onças. Escreva um programa que
leia o peso de um pacote de cereal matinal em onças e apresente na saída o peso em toneladas métricas,
assim como o número de caixas necessárias para fornecer uma tonelada métrica de cereal.*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;



int main(){
    double toneladas;
    double oncas;
    int caixas;

    cout << "Insira o peso do pacote do cereal matial em oncas: \n" << endl;
    cin >> oncas;

    toneladas = oncas/35273.92;       // converte onças para toneladas

    cout << "O peso do cereal em toneladas ehde " << toneladas << "\n" << endl;
    caixas = 35273.92/oncas;          // calcula quantas caixas são necessárias para 1 tonelada

    cout << "O numero de caixas necessarias para fornecer uma tonelada do cereal eh de:" << caixas << "\n" <<endl;

    return 0;

}
