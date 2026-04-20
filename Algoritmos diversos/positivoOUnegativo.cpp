/*Faca uma funcão para verificar se um número é positivo ou negativo. Sendo que o valor
de retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int verifica(int num){
    if (num > 0) return 1;
    if (num < 0) return -1;
    return 0;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int x;

    cout << "Informe um número: ";
    cin >> x;

    int resultado = verifica(x);

    if (resultado == 1)
        cout << "Positivo\n";
    else if (resultado == -1)
        cout << "Negativo\n";
    else
        cout << "Zero\n";

}
