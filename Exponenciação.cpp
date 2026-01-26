/*Exponenciação Escreva uma função
potencia Int(base, expoente) que retorne o
valor de base^expoente
Por exemplo, potenciaInt( 3, 4 ) = 3 * 3 * 3 * 3.
Suponha que expoente seja um inteiro positivo, dife
rente de zero, e base seja um inteiro. A função poten
ciaInt deve usar for para controlar o cálculo. Não use
funções da biblioteca matemática.*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int potencia(int base, int expoente){
    int resultado = 1;
    for(int i = 1; i <= expoente; i++){
        resultado = resultado * base;
    }
    return resultado;
}

int main(){
    int a;
    int b;
    setlocale(LC_ALL, "Portuguese");

    cout << "=== CALCULADORA DE POTÊNCIA ===" << endl;

    cout << "Insira a base: ";
    cin >> a;

    cout << "Insira o expoente: ";
    cin >> b;

    if(b < 0){
        cout << "ERRO. O expoente nessa função deve ser positivo." << endl;
        return 1;
    }

    cout << "Exponenciação entre (" << a << ", " << b << ")" << " = " << potencia(a,b) << endl;
    return 0;
}
