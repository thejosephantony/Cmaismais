/*31. Leia um n´umero inteiro e imprima o seu antecessor e o seu sucessor.*/


#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int num;
    int sucessor;
    int antecessor;

    cout << "Digite o número inteiro: " << endl;
    cin >> num;
    sucessor = num + 1;
    antecessor = num - 1;

    cout << "Número digitado: " << num << endl;
    cout << "Antecessor: " << antecessor << "\nSucessor: " << sucessor << endl;
    return 0;

}
