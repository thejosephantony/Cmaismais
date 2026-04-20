/*Faça um programa que receba três números e mostre-os em ordem crescente.*/

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
    double num1;
    double num2;
    double num3;

    double maior;
    double menor;
    double meio;

    cout << "Insira três números: ";
    cin >> num1 >> num2 >> num3;

    if(num1 >= num2 && num1 >= num3){
        maior = num1;
        if(num2 >= num3){
            meio = num2;
            menor = num3;
    }
        else{
            meio = num3;
            menor = num2;
        }
    }
    else if(num2 >= num1 && num2 >= num3){
        maior = num2;

        if(num1 >= num3){
            menor = num3;
            meio = num1;
        }
        else{
            meio = num3;
            menor = num1;
        }
    }
    else{
        maior = num3;
        if(num1 >= num2){
            meio = num1;
            menor = num2;
        }
        else{
            meio = num2;
            menor = num1;
        }
    }
    cout << "----------ORDENAÇÃO-------------" << endl;
    cout << "Números digitados: " << num1 << " " << num2 << " " << num3 << endl;
    cout << "Em ordem crescente: " << menor << " < " << meio << " < " << maior << endl;

    return 0;
}
