/*Sejam a e b os catetos de um triˆ angulo, onde a hipotenusa ´ e obtida pela equac¸˜ ao:
hipotenusa = √a2 +b2. Fac¸a um programa que receba os valores de a e b e calcule
o valor da hipotenusa atrav´ es da equac¸˜ ao. Imprima o resultado dessa operac¸˜ ao.*/

#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){
    double catetoA;
    double catetoB;
    double hipotenusa;

    cout << "Cateto A: " << endl;
    cin >> catetoA;
    cout << "Cateto B: " << endl;
    cin >> catetoB;
    cout << std::fixed << std::setprecision(2) << endl;
    hipotenusa = pow((catetoA*catetoA + catetoB*catetoB), 0.5);

    cout << "Hipotenusa: " << hipotenusa << endl;

    return 0;

}
