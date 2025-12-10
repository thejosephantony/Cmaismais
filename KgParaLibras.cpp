/*Leia um valor de massa em quilogramas e apresente-o convertido em libras. A f´ ormula
de convers˜ ao ´ e: L = K*0,45, sendo K a massa em quilogramas e L a massa em libras.*/

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main(){
    double kg;
    double libras;

    cout << "Digite a massa em kg: " << endl;
    cin >> kg;

    cout << std::fixed << std::setprecision(2) << endl;
    libras = kg/0.45;

    cout << kg << "kg é " << libras << "lb" << endl;

    return 0;

}
