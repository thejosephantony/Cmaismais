/* 12. Leia uma distˆ ancia em milhas e apresente-a convertida em quilˆ ometros. A f´ ormula de
convers˜ ao ´ e: K = 1,61 ∗ M, sendo K a distˆ ancia em quilˆ ometros e M em milhas. */

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;


int main(){
    double distanciaMilhas;
    double distanciaKm;

    cout << "Digite a distancia em milhas: " << endl;
    cin >> distanciaMilhas;

    cout << std::fixed << std::setprecision(2) << endl;

    distanciaKm = distanciaMilhas * 1.61;

    cout << distanciaMilhas << " milhas em km eh " << distanciaKm << "km" << endl;

    return 0;

}
