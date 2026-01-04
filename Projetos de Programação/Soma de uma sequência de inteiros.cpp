/*Soma de uma sequência de inteiros. Escreva um
programa que some uma sequência de inteiros. Conside
re que o primeiro inteiro lido com scanf especifique o
número de valores restantes a serem inseridos. Seu pro
grama deve ler apenas um valor toda vez que scanf for
executado. Uma sequência de entrada típica poderia ser
5 100 200 300 400 500
onde o 5 indica que os cinco valores subsequentes devem
ser somados.*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    int x;
    int soma = 0;

    cout << "Quantos números queres somar? ";
    cin >> num;

    if(num <= 0){
        cout << "ERRO. O número deve ser positivo." << endl;
        return 1;
    }

    for(int i = 1; i <= num; i++){
        cout << "Informe um número: ";
        cin >> x;

        soma = soma + x;
    }

    cout << "Soma " << soma << endl;
    return 0;

}
