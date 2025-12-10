#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    double metrosCubicos;
    double litros;

    cout << "Digite o volume em metros cubicos: \n" << endl;
    cin >> metrosCubicos;

    cout << std::fixed << std::setprecision(2) << endl;

    litros = metrosCubicos * 1000;

    cout << metrosCubicos << "m3 metros cúbicos é " << litros << "l litros" << endl;

    return 0;
}
