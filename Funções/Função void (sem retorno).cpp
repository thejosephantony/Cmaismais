#include <iostream>
#include <locale>

using namespace std;

void saudacao(){
    cout << "Olá, mundo." << endl;
}

// a função void não retorna nada.

int main(){
    setlocale(LC_ALL, "Portuguese");

    saudacao();    // chamo a função
    return 0;
}
