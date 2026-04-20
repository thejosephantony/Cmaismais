/*Ler uma sequencia de numeros inteiros e determinar se eles s˜ao pares ou n˜ao. Devera
ser informado o numero de dados lidos e numero de valores pares. O processo termina
quando for digitado o numero 1000.*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;


int main(){
    setlocale(LC_ALL, "Portuguese");

    int num;
    int cont = 0;
    int contPar = 0;

    while(true){
        cout << "Informe um número (1000 para terminar): " << endl;
        cin >> num;

        if(num == 1000){
            break;
        }
        if(num % 2 == 0){
            cout << num << " é par." << endl;
            contPar++;
        }
        else{
            cout << num << " é ímpar" << endl;

        }
        cont++;
    }
    cout << "Foram lidos " << cont << " números ao todo." << endl;
    cout << "Foram lidos " << contPar << " números pares" << endl;
    return 0;
}
