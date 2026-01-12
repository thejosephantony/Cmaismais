/*
Faça um programa que gere um número aleatório entre 1 e 1000.

O usuário deve tentar adivinhar qual número foi gerado.
A cada tentativa, o programa deve informar se o chute é
menor ou maior que o número gerado.

O programa deve continuar até que o usuário acerte o número.

Ao final, o programa deve informar em quantas tentativas
o número foi descoberto.
*/

#include <iostream>
#include <locale>
#include <random>

using std::cout;
using std::cin;
using std::endl;
using std::random_device;
using std::mt19937;
using std::uniform_int_distribution;

int main(){
    setlocale(LC_ALL, "Portuguese");

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 1000);

    int numGerado = dist(gen);
    int chute;
    int tentativas = 0;

    do{
        cout << "Informe um número entre [1, 1000]: ";
        cin >> chute;

        if(chute < 1 || chute > 1000){
            cout << "ERRO. O número deve estar no intervalo [1, 1000]." << endl;
            continue;
        }

        tentativas++;

        if(chute > numGerado){
            cout << "O chute é MAIOR que o número gerado." << endl;
        }
        else if(chute < numGerado){
            cout << "O chute é MENOR que o número gerado." << endl;
        }
        else{
            cout << "Você acertou o número!" << endl;
        }

    }while(chute != numGerado);

    cout << "Total de tentativas: " << tentativas << endl;

    return 0;
}
