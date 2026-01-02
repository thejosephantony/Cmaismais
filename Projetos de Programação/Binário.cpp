/*Insira um inteiro contendo somente 0s e 1s (isto é, um inteiro ‘binário’) e imprima seu equivalente decimal. Utilize os operadores de módulo
e divisão para pegar os dígitos do número  ‘binário’ um de cada vez da direita para a esquerda. De modo muito semelhante ao sistema de
números decimais, em que o dígito mais à direita tem um valor posicional de 1, o próximo dígito à esquerda tem um valor posicional de
10, depois 100, depois 1.000 e assim por diante, no sistema de números binários o dígito mais à direita tem um valor posicional de 1, o
próximo dígito à esquerda tem um valor posicional de 2, depois 4, depois 8 e assim por diante. Assim, o número decimal 234 pode ser
interpretado como 2 * 100 + 3 * 10 + 4 * 1. O equivalente decimal do binário 1101 é 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 ou 1 + 0 + 4 + 8, ou
13.*/


#include <iostream>
#include <locale>


using std::cout;
using std::cin;
using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int binario;
    int decimal = 0;
    int base = 1;

    cout << "Insira um número em binário (contendo 0s e 1s): ";
    cin >> binario;

    while(binario > 0){
        int digito = binario % 10;

        if(digito != 0 && digito != 1){
            cout << "ERRO. O número não é binário" << endl;
            return 1;
        }
        decimal = decimal + digito * base;
        base = base * 2;
        binario = binario/10;
    }

    cout << "Equivalente decimal: " << decimal << endl;
    return 0;


}
