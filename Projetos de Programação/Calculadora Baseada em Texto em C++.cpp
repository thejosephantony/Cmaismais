#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int a;
    int b;
    double resultado;

    int op;

    cout << "Digite o primeiro número: " << endl;
    cin >> a;
    cout << "Digite o segundo número: " << endl;
    cin >> b;

    do {
        cout << "===============================" << endl;
        cout << "     Calculadora Simples       " << endl;
        cout << "===============================" << endl;
        cout << "Selecione uma opção:\n 1. Adição\n 2. Subtraçãoo\n 3. Multiplicação\n 4. Divisão\n 5. Reiniciar com novos números\n 6. Sair\n Opção: " << endl;
        cin >> op;

        switch(op){
            case 1:
                resultado = a + b;
                cout << a << " + " << b << " = " << resultado << endl;
                break;
            case 2:
                resultado = a - b;
                cout << a << " - " << b << " = " << resultado << endl;
                break;
            case 3:
                resultado = a * b;
                cout << a << " x " << b << " = " << resultado << endl;
                break;

            case 4:
                if (b == 0){
                    cout << "Não existe divisão por zero.\n" << endl;
                    break;
                }
                else{
                    resultado = a/b;
                    resultado = static_cast<double>(a) / b;
                    cout << std::fixed << std::setprecision(2);
                    cout << a << " / " << b << " = " << resultado << endl;
                    break;
                }
            case 5:
                cout << "Digite o novo primeiro número: \n" << endl;
                cin >> a;
                cout << "Digite o novo segundo número: \n" << endl;
                cin >> b;
                cout << "Núros atualizados: " << a << " e " << b << endl;
                break;


            case 6:
                cout << "Até mais.\n" << endl;
                break;
            default:
                cout << "Informe uma opção válida." << endl;
        }

    }
    while(op!=6);

    return 0;


}
