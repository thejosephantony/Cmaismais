/*Faca um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes formulas (onde h corresponde a altura):
• Homens: (72.7∗h)−58
• Mulheres: (62,1 ∗ h) −44,7*/


#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::fixed;
using std::string;

int main(){
    string sexo;
    double altura;
    double pesoIdeal;

    cout << "Qual o seu sexo?" << endl;
    cin >> sexo;

    cout << "Qual a sua altura?" << endl;
    cin >> altura;

    for (char&c : sexo) c = tolower(c);

    cout << fixed << setprecision(2);

    if (sexo == "masculino" || sexo == "m" || sexo == "homem" || sexo == "h"){
        pesoIdeal = (72.7 * altura) - 58.0;
        cout << "Seu peso ideal: " << pesoIdeal <<"kg" <<endl;
    }
    else if (sexo == "feminino" || sexo == "f" || sexo == "mulher") {
        pesoIdeal = (62.1 * altura) - 44.7;
        cout << "Seu peso ideal: " << pesoIdeal << "kg" << endl;
    }
    else{
        cout << "Entrada invalida." << endl;
    }
    return 0;

}
