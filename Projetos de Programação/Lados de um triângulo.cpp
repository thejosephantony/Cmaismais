/*Escreva um programa que lê três valores double não-zero e determina e imprime se esses valores poderiam representar os lados de um
triângulo.*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");

    double lado1;
    double lado2;
    double lado3;

    cout << "Insira três valores: ";
    cin >> lado1 >> lado2 >> lado3;

    if(lado1 <= 0 || lado2 <= 0 || lado3 <= 0){
        cout << "Todos os valores devem ser positivos" << endl;
        return 1;
    }

    if((lado1 >= lado2 + lado3) || (lado2 >= lado1 + lado3) || (lado3 >= lado2 + lado1)){
        cout << "Os lados não formam um triângulo" << endl;
    }
    else{
        cout << "Os lados formam um triângulo" << endl;
    }
    return 0;

}
