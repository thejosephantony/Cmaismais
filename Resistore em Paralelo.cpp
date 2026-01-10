/*
Faça um programa que calcule a associação em paralelo de dois resistores R1 e R2,
fornecidos pelo usuário via teclado.

O programa deve continuar solicitando os valores de R1 e R2 e calculando a
resistência equivalente até que o usuário informe um valor de resistência igual a zero.

A fórmula da resistência equivalente em paralelo é:

        R = (R1 * R2) / (R1 + R2)
*/


#include <iostream>
#include <locale>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
    setlocale(LC_ALL, "Portuguese");
    cout << fixed << setprecision(2);

    double R1;
    double R2;
    double REQ;

    do{
        cout << "Insira os valores dos resistores 1 e 2 (digite 0 para encerrar): ";
        cin >> R1 >> R2;

        if (R1 == 0 || R2 == 0) {
            cout << "Valor zero detectado. Programa encerrado." << endl;
            break;
        }

        if(R1 < 0 || R2 < 0){
            cout << "ERRO. Os valores de R1 e R2 devem ser positivos" << endl;
            continue;
        }

        REQ = (R1*R2)/(R1+R2);

        cout << "A resistência equivalente dos resistores " << R1 << " e " << R2 << " = " << REQ << endl;

    } while(true);

    return 0;

}
