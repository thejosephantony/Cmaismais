/*Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando números maiores que 0.*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

/*int main(){
    setlocale(LC_ALL, "Portuguese");

    for(int i = 1; i <= 5; i++){
        cout << (3 * i) << endl;
    }
    return 0;

}*/


int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero = 1;
    int multiplos = 0;

    while(multiplos < 5){
        if(numero % 3 == 0){
            cout << numero << endl;
            multiplos++;
        }
        numero++;
    }
    return 0;

}
