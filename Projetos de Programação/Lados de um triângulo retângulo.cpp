/*Lados de um triângulo retângulo. Escreva um pro
grama que leia três inteiros diferentes de zero e deter
mine e imprima se eles poderiam ser os lados de um
triângulo retângulo.*/

#include <iostream>
#include <cmath>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int ladoA;
    int ladoB;
    int ladoC;

    cout << "Insira os lados do triângulo: ";
    cin >> ladoA >> ladoB >> ladoC;

    if(ladoA <= 0 or ladoB <= 0 or ladoC <= 0){
        cout << "ERRO. Todos os lados devem ser positivos." << endl;
        return 1;
    }

    if((ladoA + ladoB > ladoC) and (ladoB + ladoC > ladoA) and (ladoC + ladoA > ladoB)){
        if((ladoA*ladoA + ladoB*ladoB == ladoC*ladoC) or
           (ladoA*ladoA + ladoC*ladoC == ladoB*ladoB) or
           (ladoB*ladoB + ladoC*ladoC == ladoA*ladoA)) {

            cout << "Os lados podem formar um triângulo retângulo" << endl;

        }
        else{
        cout << "Os lados formam um triângulo, mas não um retângulo" << endl;
    }
    }
    else{
        cout << "Os lados não formam um triângulo" << endl;
    }

    return 0;


}
