/*
Escreva um programa completo que permita a qualquer aluno introduzir,
pelo teclado, uma sequência arbitrária de notas (válidas no intervalo
de 10 a 20) e que mostre na tela, como resultado, a correspondente
média aritmética.

O número de notas com que o aluno pretenda efetuar o cálculo
não será fornecido ao programa, o qual terminará quando for
introduzido um valor que não seja válido como nota de aprovação.
*/


#include <iostream>
#include <iomanip>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
    setlocale(LC_ALL, "Portuguese");

    double nota;
    double media;
    double somaNotas = 0;
    int cont = 0;

    cout << fixed << setprecision(2);

    do{
        cout << "Insira uma nota entre 10-20: ";
        cin >> nota;

        if(nota < 10 || nota > 20){
            cout << "Programa encerrado." << endl;
            break;
        }

        somaNotas+=nota;
        cont++;
    }
    while(true);

    if(cont > 0){
    media = somaNotas/cont;

    cout << "Foram lidas " << cont << " notas." << endl;
    cout << "Soma das notas = " << somaNotas << endl;
    cout << "Média: " << media << endl;

    }
    else{
        cout << "Nenhuma nota foi lida." << endl;
    }

    return 0;
}
