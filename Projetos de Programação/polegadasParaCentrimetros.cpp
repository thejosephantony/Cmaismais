/*Leia um valor de comprimento em polegadas e apresente-o convertido em cent´ ımetros.
A f´ ormula de convers˜ ao ´ e: C = P ∗ 2,54, sendo C o comprimento em cent´ ımetros e P o
comprimento em polegadas.*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    double polegadas;
    double centimetros;

    cout << "Valor do comprimento em polegadas: " << endl;
    cin >> polegadas;

    cout <<std::fixed << std::setprecision(2) << endl;

    centimetros = polegadas * 2.54;

    cout << polegadas << " polegadas é igual a " << centimetros << "cm" << endl;

    return 0;



}
