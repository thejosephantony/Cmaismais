/*Faca um programa que leia 2 notas de um aluno, verifique se as notas s˜ao validas e
exiba na tela a media destas notas. Uma nota valida deve ser, obrigatoriamente, um
valor entre 0.0 e 10.0, onde caso a nota n˜ao possua um valor valido, este fato deve ser
informado ao usuário e o programa termina.*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
    double nota1;
    double nota2;
    double media;

    cout << "Nota 1: " << endl;
    cin >> nota1;

    cout << "Nota 2: " << endl;
    cin >> nota2;

    if ((nota1 >= 0.0 && nota1 <= 10.0) && (nota2 >= 0.0 && nota2 <= 10.0)){
        cout << "As notas sao validas." << endl;
        media = (nota1 + nota2)/2;
        cout << "Media: " << media << endl;
    }
    else{
        cout << "As notas nao sao validas." << endl;
    }
    return 0;

}
