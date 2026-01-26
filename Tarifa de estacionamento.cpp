/*Um estacionamento cobra uma tarifa mínima de R$ 2,00 por uma permanência de
até três horas, e R$ 0,50 adicionais por hora para cada
hora, ou parte dela, por até três horas. A tarifa máxima
para qualquer período de 24 horas é de R$ 10,00. Suponha
que nenhum carro estacione por mais de 24 horas de cada
vez. Escreva um programa que calcule e imprima as tarifas
de estacionamento para cada um dos três clientes que uti
lizaram esse estacionamento ontem. Você deverá informar
as horas de permanência de cada cliente. Seu programa
deverá imprimir os resultados em um formato tabular e
deverá calcular e imprimir o total recebido ontem. O pro
grama deverá usar a função calcularTaxas para deter
minar o valor devido por cliente. Sua saída deverá aparecer
no seguinte formato:
Car      Hours       Charge
1          1.5         2.00
2          4.0         2.50
3         24.0        10.00
TOTAL     29.5        14.50*/

#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

double calcularTaxas(double horas) {
    const double tarifaMinima = 2.00;
    const double tarifaAdd = 0.50;
    const double tarifaMaxima = 10.00;


    if (horas <= 3.0) {
        return tarifaMinima;
    }

    else if (horas < 24.0) {
        double horasExtras = std::ceil(horas - 3.0);
        double valor = tarifaMinima + (horasExtras * tarifaAdd);


        return (valor > tarifaMaxima) ? tarifaMaxima : valor;
    }

    else {
        return tarifaMaxima;
    }
}

int main() {

    double horas1 = 1.5;
    double horas2 = 4.0;
    double horas3 = 24.0;


    double taxa1 = calcularTaxas(horas1);
    double taxa2 = calcularTaxas(horas2);
    double taxa3 = calcularTaxas(horas3);


    double totalHoras = horas1 + horas2 + horas3;
    double totalTaxas = taxa1 + taxa2 + taxa3;

    cout << fixed << setprecision(2);


    cout << std::left << std::setw(10) << "Carro"
         << std::setw(10) << "Horas"
         << std::setw(10) << "Taxa" << endl;


    cout << std::string(30, '-') << endl;


    cout << std::left << std::setw(10) << "1"
         << std::setw(10) << horas1
         << std::setw(10) << taxa1 << endl;

    cout << std::left << std::setw(10) << "2"
         << std::setw(10) << horas2
         << std::setw(10) << taxa2 << endl;

    cout << std::left << std::setw(10) << "3"
         << std::setw(10) << horas3
         << std::setw(10) << taxa3 << endl;


    cout << std::string(30, '-') << endl;

    cout << std::left << std::setw(10) << "TOTAL"
         << std::setw(10) << totalHoras
         << std::setw(10) << totalTaxas << endl;

    return 0;
}
