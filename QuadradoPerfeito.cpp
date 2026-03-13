/*Faca uma funcão para verificar se um número é um quadrado perfeito. Um quadrado
perfeito é um numero inteiro n˜ao negativo que pode ser expresso como o quadrado de
outro numero inteiro. Ex: 1, 4, 9...*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;


int quadradoPerfeito(int numero){
    if(numero <= 0) return 0;

    for(int i = 2; i * i <= numero; i++){
        int contador = 0;

        while(numero % i == 0){
            numero/=i;
            contador++;

        }
        if(contador % 2 != 0){
            return 0; // expoente impar
        }
    }
    if (numero > 1) return 0; // sobrou primo com expoente 1
    return 1;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int x;

    cout << "Informe um número: ";
    cin >> x;

    if(quadradoPerfeito(x)){
        cout << x << " é quadrado perfeito." << endl;
    }
    else{
        cout << x << " não é quadrado perfeito" << endl;
    }

    return 0;

}
