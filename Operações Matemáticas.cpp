/*Fac¸a um programa que mostre ao usu´ ario um menu com 4 opc¸˜ oes de operac¸˜ oes ma
tem´ aticas (as b´ asicas, por exemplo). O usu´ ario escolhe uma das opc¸˜ oes e o seu pro
grama ent˜ ao pede dois valores num´ ericos e realiza a operac¸˜ ao, mostrando o resultado e
saindo*/

#include <iostream>
#include <locale>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;


int main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    double a;
    double b;
    double resultado;

    do{
        cout << "---------MENU-----------" << endl;
        cout << "Escolha uma das opções (1-5)" << endl;
        cout << "1- Adição" << endl;
        cout << "2- Subtração" << endl;
        cout << "3- Multiplicação" << endl;
        cout << "4- Divisão" << endl;
        cout << "5- Sair" << endl;
        cout << fixed << setprecision(2);

        cin >> opcao;

        switch(opcao){
            case 1:
                cout << "Insira o primeiro número: ";
                cin >> a;
                cout << "Insira o segundo número: ";
                cin >> b;
                resultado = a + b;
                cout << a << " + " << b << " = " << resultado << endl;
                break;
            case 2:
                cout << "Insira o primeiro número: ";
                cin >> a;
                cout << "Insira o segundo número: ";
                cin >> b;
                resultado = a - b;
                cout << a << " - " << b << " = " << resultado << endl;
                break;
            case 3:
                cout << "Insira o primeiro número: ";
                cin >> a;
                cout << "Insira o segundo número: ";
                cin >> b;
                resultado = a * b;
                cout << a << " x " << b << " = " << resultado << endl;
                break;
            case 4:
                cout << "Insira o primeiro número: ";
                cin >> a;
                cout << "Insira o segundo número: ";
                cin >> b;
                if(b == 0){
                    cout << "Não existe divisão por zero." << endl;
                    break;
                }
                else{
                resultado = a / b;
                cout << a << " / " << b << " = " << resultado << endl;
                break;
                }
            case 5:
                cout << "Até mais." << endl;
                break;
            default:
                cout << "Insira uma opção válida" << endl;
        }

    }
    while(opcao!=5);

    return 0;

}
