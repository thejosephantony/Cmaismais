/*Sejam a e b os catetos de um triâgulo, onde a hipotenusa é obtida pela equacão:
hipotenusa = raiz de a²+b². Faça uma func˜ao que receba os valores de a e b e calcule o
valor da hipotenusa através da equacão.*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;


double hipotenusa(double a, double b){
    double c;

    c = sqrt((pow(a, 2) + pow(b, 2)));
    return c;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    cout << fixed << setprecision(2);

    double x;
    double y;

    cout << "Informe os valores dos catetos: ";
    cin >> x >> y;

    cout << "A hipotenusa é igual a " << hipotenusa(x,y) << endl;
    return 0;

}
