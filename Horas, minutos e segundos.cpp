/* Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int segundosTotais;
    int horas;
    int minutos;
    int segundos;

    cout << "Digite o número de segundos totais: " << endl;
    cin >> segundosTotais;

    horas = segundosTotais/3600;
    minutos = (segundosTotais % 3600) / 60;
    segundos = segundosTotais % 60;

    cout << segundosTotais << "s = "
    << horas << "h "
    << minutos  << "m "
    << segundos << "s " << endl;

    return 0;

}
