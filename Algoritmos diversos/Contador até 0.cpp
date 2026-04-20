/*Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva
na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem "FIM!" apos a
contagem.*/

#include <iostream>
#include  <locale>

using std::cout;
using std::cin;
using std::endl;

/*int main(){

    int num = 10;

    while(num >= 0){
        cout << num << endl;
        num--;
    }
    cout << "FIM!" << endl;

    return 0;

}*/

int main(){

    for(int num = 10; num >= 0; num--){
        cout << num << endl;
    }
    cout << "FIM!" << endl;
}
