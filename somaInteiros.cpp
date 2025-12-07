// 3. Pec¸a ao usuario para digitar tres valores inteiros e imprima a soma deles.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int A, B, C;
    int soma;

    cout << "Informe tres numeros: " << endl;
    cin >> A >> B >> C;

    soma = A + B + C;

    cout << "A soma foi de: " << soma << endl;

    return 0;

}

