/*Fatorial. O fatorial de um inteiro não negativo n é es
crito como n! (pronuncia-se ‘n fatorial’) e é definido da
seguinte forma:
n! = n x (n - 1) x (n - 2)x ... x 1   (para valores de n
maiores ou iguais a 1)
e
n! = 1   (para n = 0).
Por exemplo, 5! = 5 · 4 · 3 · 2 · 1, que é 120.
a) Escreva um programa que leia um inteiro não nega
tivo e calcule e imprima seu fatorial.*/

#include <iostream>
#include <cmath>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num;
    int cont = 1;
    int fatorial = 1;

    cout << "Insira um número: ";
    cin >> num;


    if(num < 0){
        cout << "ERRO. O número não pode ser negativo.." << endl;
        return 1;
    }

    while(cont <= num){
            fatorial = cont * fatorial;
            cont++;

    }
    cout << "Fatorial de " << num << " = " << fatorial << endl;
    return 0;

}
