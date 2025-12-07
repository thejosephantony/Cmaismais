/* Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
f ´ ormula de convers˜ ao ´ e: C = K − 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin. */

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;


int main(){

    double tempCelsius;
    double tempKelvin;

    cout << "Temperatura em Kelvin: " << endl;
    cin >> tempKelvin;

    tempCelsius = tempKelvin - 273.15;
    cout << std::fixed << std::setprecision(2) << endl;

    cout << tempKelvin << "K em Celsius eh " << tempCelsius << "ºC" << endl;

    return 0;


}
