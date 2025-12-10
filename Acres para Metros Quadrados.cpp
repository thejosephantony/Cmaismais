/* Leia um valor de ´ area em acres e apresente-o convertido em metros quadrados m2. A
f ´ ormula de convers˜ ao ´ e: M = A ∗ 4048,58, sendo M a ´ area em metros quadrados e A a
´ area em acres.*/

#include <iostream>
#include <iomanip>


using std::cout;
using std::cin;
using std::endl;

int main(){
    double metrosQ;
    double acres;

    cout << "Informe o valor da área em metros quadrados (m^2)" << endl;
    cin >> acres;

    cout << std::fixed << std::setprecision(2) << endl;

    metrosQ = acres * 4048.58;

    cout << acres << " acres é " << metrosQ << "m^2" << endl;

    return 0;

}
