/* Leia um numero real. Se o n´umero for positivo imprima a raiz quadrada. Do contr´ ario,
imprima o numero ao quadrado.*/


#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
    double numero;
    double raizQuadrada;
    double potencia;

    cout << "Digite o numero: " << endl;
    cin >> numero;

    cout << fixed << setprecision(4);

    if (numero >= 0){
        raizQuadrada = sqrt(numero);
        cout << "A raiz quadrada de " << numero << " = " << raizQuadrada << endl;
    }
    else{
        potencia = pow(numero, 2);
        cout << "A potencia ao quadrado de " << numero << " = " << potencia << endl;
    }

    return 0;

}
