/*Os motoristas se preocupam com o consumo de combustível dos seus automóveis. Um motorista monitorou vários tanques cheios de
gasolina registrando a quilometragem dirigida e a quantidade de combustível em litros utilizados para cada tanque cheio. Desenvolva um
programa C++ que utiliza uma instrução while para inserir os quilômetros percorridos e a quantidade de litros de gasolina utilizados
para cada taque. O programa deve calcular e exibir o consumo em quilômetros/litro para cada tanque cheio e imprimir a quilometragem
combinada e a soma total de litros de combustível consumidos até esse ponto*/

#include <iostream>
#include <iomanip>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
    setlocale(LC_ALL, "Portuguese");
    double distanciaPercorrida;
    double quantLitros;
    double consumoAtual;
    double totalLitros;
    double totalDistancia;
    double consumoGeral;

    consumoGeral = 0;
    totalDistancia = 0;
    totalLitros = 0;

    cout << fixed << setprecision(6);

    while(true){
        cout << "Informe quantos litros abasteceu (-1 para terminar): ";
        cin >> quantLitros;
        if(quantLitros == -1){
            break;
        }
        if(quantLitros <= 0){
            cout << "ERRO. Os litros devem ser positivos. Tente novamente." << endl;
            continue;
        }

        cout << "Informe quantos km dirigiu: ";
        cin >> distanciaPercorrida;

        if(distanciaPercorrida < 0){
            cout << "ERRO. A distancia não pode ser negativa. Tente novamente." << endl;
            continue;
        }

        consumoAtual = distanciaPercorrida/quantLitros;
        cout << "O consumo atual foi de " << consumoAtual << " km/l" << endl;

        totalDistancia = distanciaPercorrida + totalDistancia;
        totalLitros = quantLitros + totalLitros;

    }

    consumoGeral = totalDistancia/totalLitros;
    cout << "------------VISÃO GERAL--------------" << endl;
    cout << "A distância total percorrida foi de " << totalDistancia << "km" << endl;
    cout << "O total de litros de combustível foi de " << totalLitros << "l" << endl;
    cout << "O consumo geral foi de " << consumoGeral << " km/l" << endl;
    return 0;
}
