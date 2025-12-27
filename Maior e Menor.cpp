/*Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor
lido.*/

#include <iostream>
#include <locale>
#include <climits>

using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int maior = INT_MIN;
    int menor = INT_MAX;
    int num;

    for (int i = 1; i <= 10; i++){
        cout << "Insira o " << i << "º número: ";
        cin >> num;

        if(num > maior){
            maior = num;
        }
        if(num < menor){
            menor = num;
        }

    }
     cout << "O maior: " << maior << endl;
     cout << "O menor: " << menor << endl;
     return 0;
}

/*int main(){
    int maior;
    int menor;
    int num;

    cout << "Insira o 1º número: ";
    cin >> num;

    maior = menor = num;

    for(int i = 2; i <= 10; i++){
        cout << "Insira o " << i << "º número: ";
        cin >> num;

        if(num > maior){
            maior = num;
        }
        if(num < menor){
            menor = num;
        }
    }

    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;

    return 0;

}*/
