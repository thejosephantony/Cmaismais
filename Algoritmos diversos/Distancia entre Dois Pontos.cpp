/*Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua
distancia da origem (0,0).*/


#include <iostream>
#include <iomanip>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
    int x;
    int y;
    double distancia;

    cout << "Informe a coordenada x: " << endl;
    cin >> x;
    cout << "Informe a coordenada y: " << endl;
    cin >> y;

    distancia = sqrt(x*x + y*y); // até a origem

    cout << fixed << setprecision(2);

    cout << "Distancia: " << distancia;

    return 0;
}
