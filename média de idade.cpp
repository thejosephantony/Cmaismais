/*
Faça um programa que leia um número indeterminado de idades de indivíduos.
A leitura deve ser encerrada quando for informada a idade 0.

Ao final, o programa deve calcular e exibir a idade média do grupo.
*/


#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>

using std::cout;
using std::endl;
using std::cin;
using std::fixed;
using std::setprecision;

int main(){
    setlocale(LC_ALL, "Portuguese");
    cout << fixed << setprecision(2);

    double idade;
    double soma = 0;
    double media;
    int cont = 0;

    do{
        cout << "Insira a sua idade: ";
        cin >> idade;

        if(idade == 0){
            cout << "Programa encerrado." << endl;
            break;
        }
        if(idade < 0 ){
            cout << "ERRO. A idade deve ser positiva." << endl;
            continue;
        }

        soma+=idade;
        cont++;

    }while(true);

    if(cont > 0){
    media = soma/cont;

    cout << "Foram lidas " << cont << " idades" << endl;
    cout << "Média: " << media << " anos." << endl;
    }
    else{
        cout << "Nenhuma idade válida foi informada" << endl;
    }
    return 0;

}
