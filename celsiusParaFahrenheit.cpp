/* 5. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
Af´ ormula de convers˜ ao ´ e: F = C∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
e C atemperatura em Celsius. */

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    double tempCelsius;
    double tempFahrenheit;

    cout << "Digite a temperatura em Celsius: " << endl;
    cin >> tempCelsius;
    tempFahrenheit = (9.0/5.0 * tempCelsius) + 32;

    cout << std::fixed << std::setprecision(2);
    cout << tempCelsius << "ºC em Fahrenheit eh " << tempFahrenheit << "ºF" << endl;

    return 0;

}
