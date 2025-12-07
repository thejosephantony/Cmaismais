// 4. Leia um n´umero real e imprima o resultado do quadrado desse n´umero.

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main(){
    double numero;
    double quadrado;

    cout << "Numero real: " << endl;
    cin >> numero;

    quadrado = (numero*numero);
    cout << std::fixed << std::setprecision(2);
    cout << numero << " ao quadrado eh igual a " << quadrado << endl;

    return 0;

}
