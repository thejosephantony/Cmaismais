/*Leia um valor de comprimento em jardas e apresente-o convertido em metros. A f´ ormula
de convers˜ ao ´ e: M = 0,91 ∗ J, sendo J o comprimento em jardas e M o comprimento
em metros.*/


#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;


int main(){
    double jardas;
    double metros;

    cout << "Insira o comprimento em jardas: " << endl;
    cin >> jardas;

    cout << std::fixed << std::setprecision(2) << endl;

    metros = jardas * 0.91;

    cout << jardas << " jardas é " << metros << "m metros." << endl;

    return 0;

}
