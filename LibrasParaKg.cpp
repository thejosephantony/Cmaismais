/*Leia um valor de massa em libras e apresente-o convertido em quilogramas. A f´ ormula
de convers˜ ao ´ e: K = L∗0,45, sendo K a massa em quilogramas e L a massa em libras.*/

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main(){
    double kg;
    double libras;

    cout << "Digite a massa em lb: " << endl;
    cin >> libras;

    cout << std::fixed << std::setprecision(2) << endl;
    kg = libras * 0.45;

    cout << libras << "lb é " << kg << "kg" << endl;

    return 0;

}
