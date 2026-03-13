/*O máximo divisor comum (MDC) de dois inteiros é o maior inteiro que é divisível por cada um dos dois números. Escreva uma função
mdc que retorna o máximo divisor comum de dois inteiros.*/

#include <iostream>
#include <locale>
#include <cstdlib>

using std::cout;
using std::endl;

int mdc(int a, int b) {
    a = std::abs(a);
    b = std::abs(b);

    if (a == 0) return b;
    if (b == 0) return a;

    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}

int main() {
    std::setlocale(LC_ALL, "Portuguese");

    int a = 10;
    int b = 15;

    cout << "MDC(" << a << ", " << b << ") = " << mdc(a, b) << endl;
    return 0;
}
