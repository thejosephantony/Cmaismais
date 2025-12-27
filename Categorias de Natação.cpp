#include <iostream>
#include <locale>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;


int main(){
    setlocale(LC_ALL, "Portuguese");
    int idade;

    cout << "Qual a sua idade? ";
    cin >> idade;

    if (idade < 5){
        cout << "ERRO. A idade deve ser maior que cinco.";
        return 1;
    }
    if(idade >= 5 && idade <= 7){
        cout << "Idade: " << idade << endl;
        cout << "Categoria: Infantil A" << endl;
    }
    else if(idade >= 8 && idade <= 10){
        cout << "Idade: " << idade << endl;
        cout << "Categoria: Infantil B" << endl;
    }
    else if(idade >= 11 && idade <= 13){
        cout << "Idade: " << idade << endl;
        cout << "Categoria: Juvenil A" << endl;
    }
    else if (idade >= 14 && idade <= 17){
        cout << "Idade: " << idade << endl;
        cout << "Categoria: Juvenil B" << endl;
    }
    else{
        cout << "Idade: " << idade << endl;
        cout << "Categoria: Sênior" << endl;
    }
    return 0;

}
