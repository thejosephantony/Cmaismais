/*Leia um valor de ´ area em metros quadrados m2 e apresente-o convertido em hectares.
A f´ ormula de convers˜ ao ´ e: H = M ∗0,0001, sendo M a ´ area em metros quadrados e H
a ´ area em hectares.*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    double metrosQuadrados;
    double hectares;

    cout << "Informe a área em metros quadrados: " << endl;
    cin >> metrosQuadrados;

    hectares = metrosQuadrados * 0.0001;
    cout << std::fixed << std::setprecision(2) << endl;

    cout << metrosQuadrados << "m^2 é " << hectares << " hectares" << endl;

    return 0;

}
