/*9. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
f ´ ormula de convers˜ ao ´ e: K = C + 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin. */

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    double tempCelsius;
    double tempKelvin;

    cout << "Temperatura em Celsius: " << endl;
    cin >> tempCelsius;

    tempKelvin = tempCelsius + 273.15;

    cout << std::fixed << std::setprecision(2)<< endl;

    cout << tempCelsius << "ºC em Kelvin eh " << tempKelvin << "K" << endl;

    return 0;




}

