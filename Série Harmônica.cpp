/*
Em Matemática, o número harmônico H(n) é definido como a soma da série harmônica:

H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n

Faça um programa que leia um valor inteiro e positivo n
e apresente o valor de H(n).
*/


#include <iostream>
#include <locale>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
    setlocale(LC_ALL, "Portuguese");

    cout << fixed << setprecision(2);

    int n;
    double H = 0.0;

    cout << "Digite um número inteiro e positivo: ";
    cin >> n;

    if(n <= 0){
        cout << "ERRO. O número deve ser inteiro e positivo." << endl;
        return 1;
    }

    for(int i = 1; i <= n; i++){
        H+= 1.0/i;
    }

    cout << "H(" << n << ") = " << H << endl;
    return 0;

}
