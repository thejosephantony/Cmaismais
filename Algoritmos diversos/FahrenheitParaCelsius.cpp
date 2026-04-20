/* Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
A f´ ormula de convers˜ ao ´ e: C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius
e F atemperatura em Fahrenheit. */

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    double tempFahrenheit;
    double tempCelsius;

    cout << "Temperatura em Fahrenheit: " << endl;
    cin >> tempFahrenheit;

    tempCelsius = 5.0 * (tempFahrenheit - 32.0)/9.0;

    cout << std::fixed << std::setprecision(2) << endl;

    cout << tempFahrenheit << "ºF em Celsius eh " << tempCelsius << "ºC" << endl;

    return 0;



}
