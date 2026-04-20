/*Leia o valor do raio de um cırculo e calcule e imprima a area do cırculo correspondente.
A area do cırculo e π ∗ raio2, considere π = 3.141592*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){

    double raio;
    double area;

    const double pi = 3.141592;

    cout << "Informe o raio do circulo: " << endl;
    cin >> raio;

    cout << std::fixed << std::setprecision(2) << endl;

    area = raio*raio*pi;

    cout << "A área do circulo de raio " << raio << " é " << area << endl;

    return 0;


}


