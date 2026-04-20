/* A importˆ ancia de R$ 780.000,00 ser´ a dividida entre trˆ es ganhadores de um concurso.
Sendo que da quantia total:
• Oprimeiro ganhador receber´ a 46%;
• Osegundo receber´ a 32%;
• Oterceiro receber´ a o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    double primeiroGanhador;
    double segundoGanhador;
    double terceiroGanhador;

    const double quantiaTotal = 780000.00;

    cout << std::fixed << std::setprecision(2);

    primeiroGanhador = 0.46 * quantiaTotal;
    segundoGanhador = 0.32 * quantiaTotal;
    terceiroGanhador = quantiaTotal - primeiroGanhador - segundoGanhador;

    cout << "Primeiro ganhador recebe R$" << primeiroGanhador << "\nSegundo ganhador recebe R$" << segundoGanhador << "\nTerceiro ganhador recebe R$" << terceiroGanhador << endl;

    return 0;


}
