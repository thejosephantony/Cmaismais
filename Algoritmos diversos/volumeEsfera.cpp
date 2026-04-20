/*Faca uma funcão e um programa de teste para o cálculo do volume de uma esfera.
Sendo que o raio é passado por parâmetro.*/


#include <iostream>
#include <iomanip>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

double volumeEsfera(double raio){
    double volume;
    const double pi = 3.14;
    volume = 4.0/3.0*pi*raio*raio*raio;
    return volume;
}


int main(){
    setlocale(LC_ALL, "Portuguese");
    double R;

    cout << fixed << setprecision(2);

    cout << "Informe o raio da esfera (em m): ";
    cin >> R;

    if(R < 0){
        cout << "Raio inválido." << endl;
        return 1;
    }
    else{
        cout << "O volume da esfera é: " << volumeEsfera(R) << " m³" << endl;
    }

    return 0;
}
