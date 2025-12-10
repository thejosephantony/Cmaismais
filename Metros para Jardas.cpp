/* Leia um valor de comprimento em metros e apresente-o convertido em jardas. A f´ ormula
de convers˜ ao ´ e: J = M/0,91, sendo J o comprimento em jardas e M o comprimento em metros.*/

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;


int main(){
    double jardas;
    double metros;

    cout << "Insira o comprimento em metros (m): " << endl;
    cin >> metros;

    cout << std::fixed << std::setprecision(2) << endl;

    jardas = metros/0.91;

    cout << metros << " metros é " << jardas << " jardas." << endl;

    return 0;

}
