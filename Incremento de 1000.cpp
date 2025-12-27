/*Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000
em 1000, imprimindo seu valor na tela, até que seu valor seja 100000 (cem mil).*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;


int main(){
    setlocale(LC_ALL, "Portuguese");

    cout << "----------INÍCIO----------" << endl;
    for(int i = 0; i <= 100000; i+=1000){
        cout << i << endl;
    }
    cout << "----------FIM!----------" << endl;

}
