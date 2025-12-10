/*17. Leia um valor de comprimento em cent´ımetros e apresente-o convertido em polegadas.
A f´ ormula de convers˜ ao ´ e: P = C*2,54, sendo C o comprimento em cent´ ımetros e P o
comprimento em polegadas*/


#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    double polegadas;
    double centimetros;

    cout << "Valor do comprimento em centimetros: " << endl;
    cin >> centimetros;

    cout <<std::fixed << std::setprecision(2) << endl;

    polegadas = centimetros/2.54;

    cout << centimetros << "cm é igual a " << polegadas << "polegadas" << endl;

    return 0;

}
