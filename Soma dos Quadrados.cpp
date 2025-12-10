/* Fac¸a a leitura de trˆ es valores e apresente como resultado a soma dos quadrados dos
trˆ es valores lidos.*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int a;
    int b;
    int c;
    int somaQuadrados;

    cout << "Digite três números: " << endl;
    cin >> a >> b >> c;

    somaQuadrados = a*a + b*b + c*c;

    cout << "Soma dos quadros: " << somaQuadrados << endl;

    return 0;

}
