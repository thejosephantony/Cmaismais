/* 32. Leia um n´umero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro. */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int num;
    int triploNum;
    int dobroNum;

    int soma;

    cout << "Digite um número: " << endl;
    cin >> num;

    triploNum = 3*num;
    dobroNum = 2*num;

    soma = triploNum + dobroNum;

    cout << "A soma do triplo do sucessor com o dobro do antecessor de " << num << " é: " << triploNum << " + " << dobroNum << " = " << soma << endl;

    return 0;

}
