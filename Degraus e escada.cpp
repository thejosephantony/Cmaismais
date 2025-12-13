/*Receba a altura do degrau de uma escada e a altura que o usuario deseja alcanc¸ar
subindo a escada. Calcule e mostre quantos degraus o usu´ ario dever´ a subir para atingir
seu objetivo.*/


#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main() {
    double alturaDegrau;
    double alturaAlcancar;

    int degraus;

    cout << "Qual a altura do degrau?" << endl;
    cin >> alturaDegrau;

    cout << "Altura que queres alcancar: " << endl;
    cin >> alturaAlcancar;

    degraus = alturaAlcancar/alturaDegrau;


    cout << "Precisas subir " << degraus << " degraus." << endl;

    return 0;

}
