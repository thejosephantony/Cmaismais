/*Faça um programa que leia 10 inteiros e imprima sua média*/


#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int somador = 0;
    int media;
    int num;

    for(int i = 1; i <= 10; i++){
        cout << "Insira o " << i << " inteiro: ";
        cin >> num;

        somador+=num;
    }
    media = somador/10;

    cout << "A media dos 10 números é: " << media << endl;

    return 0;
}
