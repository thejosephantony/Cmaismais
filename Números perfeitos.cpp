/*Números perfeitos. Um número inteiro é considerado
um número perfeito se a soma de seus fatores, incluin
do 1 (mas não o próprio número) for igual ao próprio
número. Por exemplo, 6 é um número perfeito porque 6
= 1 + 2 + 3. Escreva uma função perfect que deter
mine se o parâmetro number é um número perfeito. Use
essa função em um programa que determine e imprima
todos os números perfeitos entre 1 e 1000. Imprima os
fatores de cada número perfeito para confirmar se o nú
mero é realmente perfeito. Desafie o poder de seu com
putador testando números muito maiores que 1000.*/


#include <iostream>
#include <locale>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

bool perfect(int number) {
    int soma = 0;

    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            soma += i;
        }
    }

    return (soma == number);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    cout << "=== NÚMEROS PERFEITOS ENTRE 1 E 1000 ===" << endl << endl;

    int contador = 0;

    for (int num = 1; num <= 1000; num++) {
        if (perfect(num)) {
            contador++;
            cout << contador << ". " << num << " é perfeito!" << endl;

            cout << "   Fatores: ";
            int soma = 0;
            bool primeiro = true;

            for (int i = 1; i < num; i++) {
                if (num % i == 0) {
                    soma += i;
                    if (!primeiro) {
                        cout << " + ";
                    }
                    cout << i;
                    primeiro = false;
                }
            }

            cout << " = " << soma << endl << endl;
        }
    }

    cout << "Total de números perfeitos encontrados: " << contador << endl;

    return 0;
}
