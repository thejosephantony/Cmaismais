/* Fac¸a um programa para converter uma letra mai´uscula em letra min´uscula. Use a tabela
ASCII para resolver o problema*/


#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main () {

    char letraMaiuscula;
    char letraMiniscula;

    cout << "Insira uma letra maiuscula: " << endl;
    cin >> letraMaiuscula;

    if (letraMaiuscula >= 'A' && letraMaiuscula <= 'Z'){
        letraMiniscula = letraMaiuscula + 32;
        cout << letraMaiuscula << " se torna " << letraMiniscula << " em miniscula" << endl;
    }

    else{
        cout << "A letra informada nao eh valida." << endl;
    }
    return 0;

}
