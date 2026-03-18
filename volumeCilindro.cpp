/*Faça uma funçao que receba a altura e o raio de um cilindro circular e retorne o volume
do cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula:
V = pi ∗raio2 ∗altura, onde pi = 3.141592*/



#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

double volumeCilindro(double raio, double altura){
    const double pi = 3.141592;

    return (pi * raio * raio * altura);
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    double r;
    double h;

    cout << "Informe o raio: ";
    cin >> r;

    cout << "Informe a altura: ";
    cin >> h;

    cout << "O volume do cilindro é: " << volumeCilindro(r, h) << endl;

    return 0;

}
