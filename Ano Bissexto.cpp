/*Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se
for divisível por 400 ou se for divisível por 4 e n˜ão for divisível por 100. Por exemplo:
1988, 1992, 1996*/

#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int ano;

    cout << "Informe o ano: ";
    cin >> ano;

    if(ano % 400 == 0){
        cout << ano << " é bissexto" << endl;
    }
    else if(ano % 4 == 0 && ano % 100 != 0){
        cout << ano << " é bissexto" << endl;
    }
    else{
        cout << ano << " não é bissexto" << endl;
    }
    return 0;
}
