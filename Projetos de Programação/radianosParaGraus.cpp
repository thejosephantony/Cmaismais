/*15. Leia um ˆ angulo em radianos e apresente-o convertido em graus. A f´ ormula de convers˜ ao
é: G =R∗180/π, sendo G o ˆ angulo em graus e R em radianos e π = 3.14.*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){

    double graus;
    double radianos;

    const double pi = 3.14;

    cout << "Apresente o ângulo em radianos: " << endl;
    cin >> radianos;

    cout << std::fixed << std::setprecision(2) << endl;

    graus = radianos * 180/pi;

    cout << radianos << " radianos é igual a " << graus << " graus" << endl;

    return 0;

}
