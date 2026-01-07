#include <iostream>
#include <locale>

using namespace std;


bool ehPar(int n){
    if(n % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num;

    cout << "Informe um número: ";
    cin >> num;

    if(ehPar(num)){
    cout << "O número é par." << endl;
    }else{
    cout << "O número é ímpar." << endl;
    }


}
