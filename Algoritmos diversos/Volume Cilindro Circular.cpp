/* Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
de um cilindro circular ´ e calculado por meio da seguinte f´ ormula: V = π ∗ raio2 ∗ altura,
onde π = 3.141592.*/


#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;


int main() {
    double raio;
    double altura;
    double volume;

    const double pi = 3.141592;

    cout << "Raio do Cilindro " << endl;
    cin >> raio;

    cout << "Altura do Cilindro " << endl;
    cin >> altura;

    volume = pi*pow(raio,2)*altura;

    cout << "Voluma do Cilindro: " << volume << "m^3" << endl;
    return 0;

}
