// 5. Leia um n´umero real e imprima a quinta parte deste n´umero.

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main(){

    double numero;
    double quintaParte;

    cout << "Informe o numero: " << endl;
    cin >> numero;

    quintaParte = numero/5;

    cout << std::fixed << std::setprecision(2);
    cout << "A quinta parte de " << numero << " = " << quintaParte;
    return 0;
}
