/* Faça um programa que receba dois números. Calcule e mostre:
 * • a soma dos números pares desse intervalo de números, incluindo os números digitados;
 * • a multiplicação dos números ímpares desse intervalo, incluindo os números digitados;
 */


#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;
    int somaPares = 0;
    long long multiImpares = 1;
    int contImpares = 0;

    cout << "Informe o número 1: ";
    cin >> num1;

    cout << "Informe o número 2: ";
    cin >> num2;

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for(int i = num1; i <= num2; i++){
        if(i % 2 == 0){
            somaPares += i;
        } else {
            multiImpares *= i;
            contImpares++;
        }
    }

    cout << "Intervalo: [" << num1 << ", " << num2 << "]" << endl;
    cout << "Soma dos pares do intervalo: " << somaPares << endl;

    if(contImpares == 0){
        cout << "Não há números ímpares no intervalo." << endl;
    } else {
        cout << "Multiplicação dos ímpares do intervalo: " << multiImpares << endl;
    }

    return 0;
}
