/*Desenvolva um programa em C++ que utiliza uma instrução while para determinar o pagamento bruto de cada um dos vários funcionários.
A empresa paga ‘hora normal’ pelas primeiras 40 horas trabalhadas por empregado e paga ‘horas extras’ com 50% de gratificação para
todas as horas trabalhadas além das primeiras 40 horas. Você recebe uma lista dos empregados da empresa, o número de horas trabalhadas
por empregado na última semana e o salário-hora de cada empregado. Seu programa deve aceitar a entrada dessas informações para cada
empregado e então determinar e exibir o salário bruto do empregado.*/


#include <iostream>
#include <locale>
#include <iomanip>
#include <cmath>


using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int horasTrabalhadas;
    double salarioHora;
    double salario;

    const int horaNormal = 40;

    cout << fixed << setprecision(2);

    while(true){

        cout << "Entre com as horas trabalhadas (-1 para terminar): ";
        cin >> horasTrabalhadas;

        if(horasTrabalhadas == -1){
            break;
        }

        if(horasTrabalhadas <= 0){
            cout << "ERRO. O número de horas deve ser positivo." << endl;
            continue;
        }


        cout << "Digite o salário por hora do funcionário R$: ";
        cin >> salarioHora;

        if(salarioHora <= 0){
            cout << "ERRO. O salário deve ser positivo." << endl;
            continue;
        }

        if(horasTrabalhadas > horaNormal){
            salario = (horasTrabalhadas - horaNormal) * 1.5 * salarioHora + horaNormal * salarioHora;
            cout << "Salário é de R$" << salario << endl;
        }
        else{
            salario = horasTrabalhadas * salarioHora;

            cout << "Salário é de R$" << salario << endl;
        }
    }

    return 0;

}
