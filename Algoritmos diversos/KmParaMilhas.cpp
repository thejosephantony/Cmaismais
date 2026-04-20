/*13. Leia uma distˆ ancia em quilˆ ometros e apresente-a convertida em milhas. A f´ ormula de
convers˜ ao ´ e: M = K/1,61, sendo K a distˆ ancia em quilˆ ometros e M em milhas) */

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main(){

    double distanciaKm;
    double distanciaMilhas;

    cout << "Digite a distancia em km: " << endl;
    cin >> distanciaKm;

    cout << std::fixed << std::setprecision(2) << endl;

    distanciaMilhas = distanciaKm/1.61;

    cout << distanciaKm << "km em milhas eh " << distanciaMilhas << " milhas" << endl;

    return 0;

}
