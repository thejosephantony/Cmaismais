/*Escreva uma função multiple que determina para um par de inteiros se o segundo inteiro é um múltiplo do primeiro. A função deve
aceitar dois argumentos inteiros e retornar true se o segundo for um múltiplo do primeiro e false, caso contrário. Utilize essa função
em um programa que insere uma série de pares de inteiros.*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

bool multiple(int primeiro, int segundo) {
    return (segundo % primeiro == 0);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    cout << "==== VERIFICAÇÃO DE MULTIPLICIDADE ====" << endl;
    cout << "Digite 0 para ambos os números para encerrar." << endl << endl;

    while (true) {
        cout << "Insira o primeiro número: ";
        cin >> num1;

        cout << "Insira o segundo número: ";
        cin >> num2;

        if (num1 == 0 && num2 == 0) {
            cout << "Programa encerrado." << endl;
            break;
        }

        if (num1 == 0) {
            cout << "Erro: O primeiro número não pode ser zero!" << endl;
            continue;
        }

        bool resultado = multiple(num1, num2);

        cout << "\nResultado: ";
        if (resultado) {
            cout << num2 << " É múltiplo de " << num1 << endl;
            cout << "Pois " << num2 << " ÷ " << num1 << " = "
                 << (num2 / num1) << " (divisão exata)" << endl;
        } else {
            cout << num2 << " NÃO é múltiplo de " << num1 << endl;
            cout << "Pois " << num2 << " ÷ " << num1 << " = "
                 << (num2 / num1) << " com resto " << (num2 % num1) << endl;
        }

        cout << "-----------------------------------" << endl;
    }

    return 0;
}
