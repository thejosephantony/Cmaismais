/*14. Leia um ˆ angulo em graus e apresente-o convertido em radianos. A formula de convers˜ão e: R =G∗π/180,
sendo G o ˆ angulo em graus e R em radianos e π = 3.14.*/

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;


int main(){
    double graus;
    double radianos;

    const double pi = 3.14;

    cout << "Apresente o ângulo em graus: \n" << endl;
    cin >> graus;

    cout << std::fixed << std::setprecision(2) << endl;

    radianos = graus * pi/180;

    cout << graus << " graus é igual a " << radianos << " radianos" << endl;

    return 0;

}
