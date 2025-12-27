#include <iostream>
#include <locale>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

int main(){
    setlocale(LC_ALL, "Portuguese");

    double km;
    double litros;
    double consumo;

    cout << "Informe a distância em km: ";
    cin >> km;

    if(km <= 0){
        cout << "ERRO. A distância deve ser maior que zero." << endl;
        return 1;
    }

    cout << "Informe a quantidade de litros: ";
    cin >> litros;

    if(litros <= 0){
        cout << "ERRO. A quantidade de combustível deve ser maior que zero." << endl;
        return 1;
    }

    cout << fixed << setprecision(2);

    consumo = km/litros;

    if (consumo < 8){
        cout << "Consumo = " << consumo << "km/l" << endl;
        cout << "Venda o carro!" << endl;
    }
    else if(consumo >= 8 && consumo < 14){
        cout << "Consumo = " << consumo << "km/l" << endl;
        cout << "Econômico!" << endl;
    }
    else{
        cout << "Consumo = " << consumo << "km/l" << endl;
        cout << "Supereconômico!" << endl;
    }

    return 0;
}
