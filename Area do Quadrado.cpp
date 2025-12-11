/*33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua area.*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    double lado;
    double area;

    cout << "Informe o lado do quadrado: " << endl;
    cin >> lado;

    area = lado * lado;

    cout << "A área do quadrado é " << area << "m^2" << endl;

    return 0;


}
