#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;


int main(){
    double litros;
    double metrosCubicos;

    cout << "Insira o volume em litros: " << endl;
    cin >> litros;

    metrosCubicos = litros/1000.00;

    cout << litros << "l em metros cúbicos é " << metrosCubicos << endl;
    return 0;
}
