/*Cálculos de hipotenusa. Defina uma função chama
da hipotenusa que calcule o tamanho da hipotenusa
de um triângulo retângulo quando os outros dois lados
são conhecidos. Use essa função em um programa para
determinar o tamanho da hipotenusa de cada um dos tri
ângulos da tabela a seguir. A função deverá usar dois ar
gumentos do tipo double e retornar a hipotenusa como
um double.*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

double hipotenusa(double x, double y){
    return sqrt((x*x + y*y));
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    cout << fixed << setprecision(2);

    double catetoA;
    double catetoB;
    double hipotenusaC;

    cout << "===== CÁLCULO DA HIPOTENUSA =====" << endl;

    for(int i = 1; i > 0; i++){
        cout << "Informe o 1º lado (digite um número menor ou igual que 0 para terminar o programa): ";
        cin >> catetoA;

        if(catetoA <= 0){
            cout << "Programa encerrado." << endl;
            break;
        }

        cout << "Informe o 2º lado (digite um número menor ou igual que 0 para terminar o programa): ";
        cin >> catetoB;

        if(catetoB <= 0){
            cout << "Programa encerrado." << endl;
            break;
        }

        hipotenusaC = hipotenusa(catetoA, catetoB);

        cout << "Hipotenusa (C² = A² + B²) = " << hipotenusaC << endl;

    }
    return 0;

}
