/*
Escreva um programa para calcular o valor da série,
considerando 5 termos:

S = 0 + 1/2! + 2/4! + 3/6! + ...
*/


#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main() {
    cout << fixed << setprecision(2);

    int termos = 5;
    double S = 0.0;
    int fatorial = 1;

    for (int i = 1; i <= termos; i++) {
        for (int j = (2*i - 1); j <= 2*i; j++) {
            fatorial *= j;
        }

        S += static_cast<double>(i) / fatorial;
    }

    cout << "S = " << S << endl;
    return 0;
}
