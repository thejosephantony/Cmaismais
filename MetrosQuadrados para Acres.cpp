/*Leia um valor de ´ area em metros quadrados m2 e apresente-o convertido em acres. A
f ´ ormula de convers˜ ao ´ e: A = M ∗ 0,000247, sendo M a ´ area em metros quadrados e A
a ´ area em acres.*/
#include <iostream>
#include <iomanip>


using std::cout;
using std::cin;
using std::endl;

int main(){
    double metrosQ;
    double acres;

    cout << "Informe o valor da área em metros quadrados (m^2)" << endl;
    cin >> metrosQ;

    cout << std::fixed << std::setprecision(2) << endl;

    acres = metrosQ * 0.000247;

    cout << metrosQ << "m^2 em acres é " << acres << endl;



}
