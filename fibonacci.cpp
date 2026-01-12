/*
Leia um número positivo do usuário e imprima a sequência de Fibonacci
até o primeiro número superior ao número lido.

Exemplo:
Entrada: 30
Saída: 0 1 1 2 3 5 8 13 21 34
*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n;
    cout << "Digite um número positivo: ";
    cin >> n;

    if (n <= 0) {
        cout << "O número deve ser positivo." << endl;
        return 0;
    }

    int a = 0, b = 1, c;

    cout << a << " " << b << " ";

    while (true) {
        c = a + b;
        cout << c << " ";

        if (c > n) {
            break;
        }

        a = b;
        b = c;
    }

    cout << endl;
    return 0;
}
