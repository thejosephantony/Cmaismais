/*Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia
da semana correspondente a este numero. Isto é, domingo se 1, segunda-feira se 2, e
assim por diante.*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int dia;

    cout << "Digite um inteiro: " << endl;
    cin >> dia;

    if(dia >= 1 && dia <= 7){
        switch(dia){
            case 1:
                cout << "Domingo." << endl;
                break;
            case 2:
                cout << "Segunda-feira." << endl;
                break;
            case 3:
                cout << "Terca-feira." << endl;
                break;
            case 4:
                cout << "Quarta-feira." << endl;
                break;
            case 5:
                cout << "Quinta-feira." << endl;
                break;
            case 6:
                cout << "Sexta-feira." << endl;
                break;
            case 7:
                cout << "Sabado." << endl;
                break;
        }
    }
    else{
        cout << "O numero informado eh invalido." << endl;
    }
    return 0;

}
