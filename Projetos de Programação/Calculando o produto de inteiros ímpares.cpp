/*Calculando o produto de inteiros ímpares. Escre
va um programa que calcule e imprima o produto dos
inteiros ímpares de 1 a 15.*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int produto = 1;

    for(int i = 1; i <= 15; i++){
        if(i % 2 == 1){
            produto = produto * i;
        }
    }
    cout << "O produto entre os inteiros ímpares de 1 a 15: " << produto << endl;
    return 0;


}
