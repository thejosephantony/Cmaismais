/*
Faça um algoritmo que converta uma velocidade expressa em km/h para m/s e vice-versa.

O programa deve apresentar um menu com:
1) Conversão de km/h para m/s
2) Conversão de m/s para km/h
3) Opção para finalizar o programa

O usuário poderá realizar quantas conversões desejar.
O programa só será encerrado quando a opção de finalizar for escolhida.
*/


#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    cout << fixed << setprecision(2);

    double velocidade;
    double ms;
    double kmh;
    int opcao;
    const double conversao = 3.60;

    do{
        cout << "Escolha uma opção: " << endl;
        cout << "1- Conversão de km/h para m/s" << endl;
        cout << "2- Conversão de m/s para km/h" << endl;
        cout << "0- Sair." << endl;
        cin >> opcao;

        if(opcao < 0 || opcao > 2){
            cout << "ERRO. Opção inválida." << endl;
            continue;
        }
        if(opcao == 0){
            cout << "Programa encerrado." << endl;
            break;
        }

        switch(opcao){
            case 1:
                cout << "Insira a velocidade em km/h: ";
                cin >> velocidade;
                if(velocidade < 0){
                    cout << "ERRO. A velocidade deve ser positiva" << endl;
                    break;
                }
                ms = velocidade/conversao;
                cout << velocidade << " km/h é " << ms << " m/s" << endl;
                break;
            case 2:
                cout << "Insira a velociade em m/s: ";
                cin >> velocidade;
                if(velocidade < 0){
                    cout << "ERRO. A velocidade deve ser positiva" << endl;
                    break;
                }
                kmh = velocidade * conversao;
                cout << velocidade << " m/s é " << kmh << " km/h" << endl;
                break;
        }

    }while(true);

    return 0;

}
