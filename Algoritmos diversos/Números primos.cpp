/*Números primos. Um inteiro é considerado primo se
for divisível apenas por 1 e por ele mesmo. Por exemplo,
2, 3, 5 e 7 são primos, mas 4, 6, 8 e 9 não são.
a) Escreva uma função que determine se um número
é primo.
b) Use essa função em um programa que determine e
imprima todos os números primos entre 1 e 10000.
Quantos desses 10000 números você realmente
precisa testar antes de ter certeza de que encontrou
todos os primos?
c) Inicialmente, você poderia pensar que n/2 é o limi
te superior dentro do qual deveria testar para ver se
um número é primo, mas você só precisa ir até a
raiz quadrada de n. Por quê? Reescreva o programa
e execute-o das duas maneiras. Estime a melhoria do
desempenho.*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

bool numeroPrimo(int numero) {
    if (numero <= 1) return false;

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    cout << "====== NÚMEROS PRIMOS ======" << endl;
    for(int i = 1; i <= 10000; i ++){
        if(numeroPrimo(i)){
            cout << i << endl;
        }
    }
    return 0;
}
