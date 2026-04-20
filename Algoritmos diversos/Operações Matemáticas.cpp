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
using std::pow;



int main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    double a;
    double b;
    double resultado;

    do{
        cout << "---------MENU-----------" << endl;
        cout << "Escolha uma das opções (0-6)" << endl;
        cout << "1- Adição" << endl;
        cout << "2- Subtração" << endl;
        cout << "3- Multiplicação" << endl;
        cout << "4- Divisão" << endl;
        cout << "5- Potenciação" << endl;
        cout << "6- Radiciação" << endl;
        cout << "0- Sair" << endl;
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
                cout << "Insira a base: ";
                cin >> a;
                cout << "Insira o expoente: ";
                cin >> b;
                resultado = pow(a,b);
                cout << "Resultado = " << resultado << endl;
                break;
            case 6:
                cout << "Insira o radicando: ";
                cin >> a;
                cout << "Insira o índice: ";
                cin >> b;
                if(b == 0){
                    cout << "O índice não pode ser zero." << endl;
                }
                else if (a < 0 && fmod(b, 2) == 0) {
                    cout << "ERRO: Radicando negativo com índice par!" << endl;
                }
                else{
                resultado = pow(a, 1.0/b);
                cout << "Resultado = " << resultado << endl;
                }
                break;
            case 0:
                cout << "Até mais." << endl;
                break;
            default:
                cout << "Insira uma opção válida" << endl;
        }

    }
    while(opcao!=0);

    return 0;

}
