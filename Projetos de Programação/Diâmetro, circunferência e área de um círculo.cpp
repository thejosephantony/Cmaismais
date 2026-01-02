/*Diâmetro, circunferência e área de um círcu
lo. Escreva um programa que leia o raio de um círculo
(como um valor float) e calcule e imprima o diâmetro,
a circunferência e a área. Use o valor 3.14159 para pi.*/

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

    double raio;
    double area;
    double diametro;
    double circunferencia;

    const double pi = 3.14159;

    cout << "Informe o raio do circulo (em m): ";
    cin >> raio;

    if(raio <= 0){
        cout << "ERRO. O raio deve ser positivo." << endl;
        return 1;
    }

    area = pi * raio * raio;
    diametro = 2*raio;
    circunferencia = 2 * pi * raio;

    cout << fixed << setprecision(2);

    cout << "Raio: " << raio << "m" << endl;
    cout << "Diâmetro: " << diametro << "m" << endl;
    cout << "Circunferência: " << circunferencia << "m" << endl;
    cout << "Area: " << area << "m²" << endl;

    return 0;
}
