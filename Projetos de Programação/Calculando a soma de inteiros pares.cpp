/*Calculando a soma de inteiros pares. Escreva um
programa que calcule e imprima a soma dos inteiros pa
res de 2 a 30.*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;


int main(){
    setlocale(LC_ALL, "Portuguese");

    int soma = 0;

    for(int i = 2; i <= 30; i++){
        if(i % 2 == 0){
            soma = soma + i;
        }
    }
    cout << "A soma dos inteiros pares de 2 a 30 = " << soma << endl;
    return 0;

}
