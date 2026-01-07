/*
Faça um programa que some todos os números naturais abaixo de 1000
que são múltiplos de 3 ou de 5.
*/


#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;


int main(){
    setlocale(LC_ALL, "Portuguese");

    int somaTotal = 0;

    for(int i = 1; i < 1000; i++){
        if(i % 3 == 0 || i % 5 == 0){
            somaTotal+=i;
    }
    }

    cout << "A soma total = " << somaTotal << endl;

    return 0;

}
