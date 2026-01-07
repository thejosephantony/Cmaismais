#include <iostream>
#include <locale>

using namespace std;

int maximo(int x, int y, int z){
    int maximoValor{x};

    if(y > maximoValor){
        maximoValor = y;
    }

    if(z > maximoValor){
        maximoValor = z;
    }
    return maximoValor;

}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;

    cout << "Digite três valores: ";
    cin >> a >> b >> c;

    cout << "O maior valor é: " << maximo(a, b, c) << endl;
    return 0;
}
