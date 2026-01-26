/*Arredondando números. Uma das aplicações da fun
ção floor é arredondar um valor para o inteiro mais
próximo. A instrução
y = floor( x + .5 );
arredondará o número x para o inteiro mais próximo e
atribuirá o resultado a y. Escreva um programa que leia
vários números e use o comando anterior para arredon
dar cada um desses números para o inteiro mais próxi
mo. Para cada número processado, imprima o número
original e o número arredondado.*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

double arredonda(double x){
    return floor(x + 0.5);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    cout << fixed << setprecision(4);

    double num;

     cout << "=== ARREDONDAMENTO DE NUMEROS ===" << endl;
     cout << "Digite 0 para encerrar o programa." << endl;

    while(true){
        cout << "Informe um número: ";
        cin >> num;

        if(num == 0){
            cout << "Programa encerrado." << endl;
            break;
        }

        cout << "O número " << num << " arredondado é: " << arredonda(num) << endl;

    }
    return 0;
}
