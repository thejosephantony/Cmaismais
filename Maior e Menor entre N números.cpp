/*Escreva um algoritmo que leia certa quantidade de números e imprima o maior deles e
quantas vezes o maior número foi lido. A quantidade de números a serem lidos deve ser
fornecida pelo usúario.*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int N;
    int num;
    int maior;
    int menor;
    int contadorMaior;

    cout << "Informe a quantidade de números que desejas computar: ";
    cin >> N;

    if(N <= 0){
        cout << "ERRO. O número deve ser positivo." << endl;
        return 1;
    }

    cout << "Informe um número: ";
    cin >> num;

    maior = num;
    menor = num;
    contadorMaior = 1;

    if(N > 1){

    for(int i = 2; i <= N; i++){
        cout << "Informe um número: ";
        cin >> num;

        if(num > maior){
            maior = num;
            contadorMaior = 1;
        }
        else if(num == maior){
            maior = num;
            contadorMaior++;
        }
        if(num < menor){
            menor = num;
        }
    }

    }
    cout << "Maior: " << maior << endl;
    cout << "O maior número foi lido " << contadorMaior << " vez(es)" << endl;
    cout << "Menor: " << menor << endl;

    return 0;

}
