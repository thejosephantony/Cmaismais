/*Fac¸a um programa que calcule e mostre a ´ area de um trap´ ezio. Sabe-se que:
A= (basemaior +basemenor)∗altura/2
Lembre-se a base maior e a base menor devem ser n´umeros maiores que zero.*/

#include <iostream>
#include <locale>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
    setlocale(LC_ALL, "Portuguese");

    double baseMaior;
    double baseMenor;
    double altura;

    double area;

    cout << "Informe a base maior do trapézio (em m): " << endl;
    cin >> baseMaior;

    cout << "Informe a base menor do trapézio (em m): " << endl;
    cin >> baseMenor;

    cout << "Informe a altura do trapézio (em m): " << endl;
    cin >> altura;

    cout << fixed << setprecision(2);

    if(baseMaior > 0 && baseMenor > 0 && altura > 0){
        area = ((baseMaior + baseMenor)*altura)/2;
        cout << "A área do trapézio = " << area << "m^2" <<  endl;
    }
    else{
        cout << "Os valores precisam ser maiores que zero" << endl;
    }
    return 0;
}
