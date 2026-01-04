/*Fatoriais. A função fatorial é usada com frequência
nos problemas de probabilidade. O fatorial de um inteiro
positivo n (escrito como n! e pronunciado como ‘fatorial
de n’) é igual ao produto dos inteiros positivos de 1 a n.
Escreva um programa que avalie os fatoriais dos inteiros
de 1 a 5. Imprima os resultados em formato tabular. Que
dificuldade poderia impedi-lo de calcular o fatorial de 20?*/


#include <iostream>
#include <locale>

using namespace std;

int main(){
    int fatorial = 1;

    cout << "n\t n!" << endl;
    cout << "--------------" << endl;

    for(int i = 1; i <= 5; i++){
        fatorial = fatorial * i;
        cout << i << "\t" << fatorial << endl;
    }
    return 0;


}
