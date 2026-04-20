/*Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela
a seguir, verifique e mostra qual a classificac˜ao dessa pessoa.*/

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

    double altura;
    double peso;

    cout << "Insira a sua altura (em m): ";
    cin >> altura;

    if(altura <= 0){
        cout << "ERRO. Altura inválida" << endl;
        return 1;
    }

    cout << "Insira o seu peso (em kg): ";
    cin >> peso;

    if(peso <= 0){
        cout << "ERRO. Peso inválido" << endl;
        return 1;
    }

    cout << fixed << setprecision(2);

    cout << "----------CLASSIFICAÇÃO-----------" << endl;
    cout << "Altura: " << altura << "m" << endl;
    cout << "Peso:   " << peso << "kg" << endl;

    if (peso <= 60.0){
        if(altura < 1.20){
            cout << "Classificação: A" << endl;
        }
        else if(altura >= 1.20 && altura <= 1.70){
            cout << "Classificação: B" << endl;
        }
        else{
            cout << "Classificação: C" << endl;
        }
    }
    else if(peso > 60.0 && peso <= 90.0){
        if(altura < 1.20){
            cout << "Classificação: D" << endl;
        }
        else if(altura >= 1.20 && altura <= 1.70){
            cout << "Classificação: E" << endl;
        }
        else{
            cout << "Classificação: F" << endl;
        }
    }
    else{
        if(altura < 1.20){
            cout << "Classificação: G" << endl;
        }
        else if(altura >= 1.20 && altura <= 1.70){
            cout << "Classificação: H" << endl;
        }
        else{
            cout << "Classificação: I" << endl;
        }
    }
    return 0;
}
