/* Fac¸a um programa para verificar se um determinado n´umero inteiro e divis´ ıvel por 3 ou
5, mas n˜ ao simultaneamente pelos dois*/

#include <iostream>
#include <iomanip>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;

    cout << "Digite o número inteiro: ";
    cin >> num;

    if(num % 5 == 0 && num % 3 == 0){
        cout << num << " é divisível por 3 e por 5" << endl;
    }
    else if(num % 5 == 0 || num % 3 == 0){
        if(num % 3 == 0){
            cout << num << " é divisível apenas por 3" << endl;
        }
        else{
            cout << num << " é divisível apenas por 5" << endl;
        }
    }
    else{
        cout << num << " não é divisível nem por 3 nem por 5" << endl;
    }
    return 0;

}
