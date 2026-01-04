/*Escreva um algoritmo que leia um numero inteiro entre 100 e 999 e imprima na saida
cada um dos algarismos que comp˜õem o numero*/

#include <iostream>
#include <cmath>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    int centena;
    int dezena;
    int unidade;

    cout << "Informe um número (entre 100-999): ";
    cin >> num;

    if(num >= 100 && num <= 999){
        unidade = num % 10;
        dezena = (num/10) % 10;
        centena = num/100;

        cout << "Número: " << num << endl;
        cout << "Centena: " << centena << endl;
        cout << "Dezena: " << dezena << endl;
        cout << "Unidade: " << unidade << endl;
    }
    else{
        cout << "ERRO. O número não corresponde às especificações" << endl;
        return 1;
    }
    return 0;
}
