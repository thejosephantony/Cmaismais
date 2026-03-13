/* Crie uma funcão que recebe como parâmetro um número inteiro e devolve o seu dobro.*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int dobro(int x){
    return 2*x;
}


int main(){
    setlocale(LC_ALL, "Portuguese");

    int num;

    cout << "Insira um número: ";
    cin >> num;

    cout << "O dobro de " << num << " é " << dobro(num) << endl;

    return 0;

}
