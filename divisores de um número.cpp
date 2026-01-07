/* Faca um algoritmo que leia um número positivo e imprima seus divisores*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;

    cout << "Informe um número: ";
    cin >> num;

    if (num <= 0) {
        cout << "ERRO. O número deve ser positivo e diferente de zero." << endl;
        return 1;
    }

    cout << "========= OS DIVISORES DE " << num << " ==========" << endl;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
