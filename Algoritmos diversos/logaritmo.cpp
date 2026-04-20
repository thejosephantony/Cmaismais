/* Ler um n´umero inteiro. Se o n´umero lido for negativo, escreva a mensagem “N´umero
inv´ alido”. Se o n´umero for positivo, calcular o logaritmo deste numero.*/

#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
    int num;
    double logbase10;
    double logaritmo;

    cout << "Digite um numero: " << endl;
    cin >> num;

    cout << fixed << setprecision(4);

    if(num >= 0){
            logbase10 = log10(num);         // na base 10
            logaritmo = log(num);            // log natural (base e)
            cout << "Logaritmo de " << num << " na base 10 = " << logbase10 << endl;
            cout << "Logaritmo natural de " << num << " na base e = " << logaritmo << endl;
    }
    else{
        cout << "Numero invalido" << endl;
    }
    return 0;
}
