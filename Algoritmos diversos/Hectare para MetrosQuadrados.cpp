/*Leia um valor de ´ area em hectares e apresente-o convertido em metros quadrados m2.
A f´ ormula de convers˜ ao ´ e: M = H ∗ 10000, sendo M a ´ area em metros quadrados e H
a ´ area em hectares.*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    double metrosQuadrados;
    double hectare;

    cout << "Informe a área em hectare: " << endl;
    cin >> hectare;

    metrosQuadrados = hectare * 10000;
    cout << std::fixed << std::setprecision(2) << endl;

    cout << hectare << "hectares é " << metrosQuadrados << "m^2" << endl;

    return 0;

}
