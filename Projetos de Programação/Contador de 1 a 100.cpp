/*Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira
vez deve usar a estrutura de repeticão for, a segunda while, e a terceira do while.*/


#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;


// usando FOR
/*int main(){
    setlocale(LC_ALL, "Portuguese");

    for(int i = 1; i <= 100; i++){
        cout << i << endl;
    }
    return 0;

}*/

// usando do while
/*
int main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 1;
    do{
        cout << i << endl;
        i++;
    }
    while(i <= 100);
    return 0;
}*/

// usando while
int main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 1;
    while(i <= 100){
        cout << i << endl;
        i++;
    }
    return 0;
}
