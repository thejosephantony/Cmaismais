/*Leia quatro notas, calcule a media aritmetica e imprima o resultado.*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    double nota1;
    double nota2;
    double nota3;
    double nota4;
    double media;

    cout << "Nota 1: " << endl;
    cin >> nota1;

    cout << "Nota 2: " << endl;
    cin >> nota2;

    cout << "Nota 3: " << endl;
    cin >> nota3;

    cout << "Nota 4: " << endl;
    cin >> nota4;

    media = (nota1 + nota2 + nota3 + nota4)/4;

    cout << std::fixed << std::setprecision(2) << endl;

    cout << "A média das notas: " << media << endl;

    return 0;

}
