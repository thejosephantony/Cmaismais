/* 11. Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilˆ ometros por hora). A f´ ormula de convers˜ ao ´ e: K = M ∗ 3.6, sendo K a velocidade
em km/h e M em m/s. */

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main(){
    double velocidadeMs;
    double velocidadeKmh;

    cout << "Digite a velocidade em m/s: " << endl;
    cin >> velocidadeMs;

    cout << std::fixed << std::setprecision(2) << endl;

    velocidadeKmh = velocidadeMs * 3.6;

    cout << velocidadeMs << "m/s em km/h eh " << velocidadeKmh << "km/h" << endl;

    return 0;

}
