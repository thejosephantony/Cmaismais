/*Leia uma velocidade em km/h (quilˆ ometros por hora) e apresente-a convertida em m/s
(metros por segundo). A f´ ormula de convers˜ ao ´ e: M = K/3.6, sendo K a velocidade em
km/h e M emm/s.*/

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main(){
    double velocidadeKMh;
    double velocidadeMS;

    cout << "Digite a velocidade em km/h: " << endl;
    cin >> velocidadeKMh;

    cout << std::fixed << std::setprecision(2)<< endl;

    velocidadeMS = velocidadeKMh/3.6;

    cout << velocidadeKMh << "km/h em m/s eh " << velocidadeMS << "m/s" << endl;

    return 0;

}
