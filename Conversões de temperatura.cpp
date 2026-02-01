/*Conversões de temperatura. Implemente as seguin
tes funções com inteiros:
a) Função celsius retorna o equivalente Celsius de
uma temperatura em Fahrenheit.
b) Função fahrenheit retorna o equivalente Fahre
nheit de uma temperatura em Celsius.
c) Use essas funções para escrever um programa
que imprima gráficos mostrando os equivalentes
em Fahrenheit de todas as temperaturas Celsius
de 0 a 100 graus, e os equivalentes em Celsius
de todas as temperaturas fahrenheit de 32 a 212
graus. Imprima as saídas em um formato tabular
que reduza o número de linhas de saída enquan
to continua sendo legível.*/

#include <iostream>
#include <iomanip>
#include <locale>

using std::cout;
using std::endl;


double CelsiusParaFahrenheit(double c){
    return (9 * c) / 5 + 32;
}

double FahrenheitParaCelsius(double f){
    return (5 * (f - 32)) / 9;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    cout << "C\tF\t\tC\tF\t\tC\tF\n";

    for(double c = 0; c <= 100; c += 3){
        cout << c << "\t" << CelsiusParaFahrenheit(c) << "\t\t";

        if(c + 1 <= 100)
            cout << c + 1 << "\t" << CelsiusParaFahrenheit(c + 1) << "\t\t";

        if(c + 2 <= 100)
            cout << c + 2 << "\t" << CelsiusParaFahrenheit(c + 2);

        cout << endl;
    }

    cout << "\n";

    cout << "F\tC\t\tF\tC\t\tF\tC\n";

    for(double f = 32; f <= 212; f += 3){
        cout << f << "\t" << FahrenheitParaCelsius(f) << "\t\t";

        if(f + 1 <= 212)
            cout << f + 1 << "\t" << FahrenheitParaCelsius(f + 1) << "\t\t";

        if(f + 2 <= 212)
            cout << f + 2 << "\t" << FahrenheitParaCelsius(f + 2);

        cout << endl;
    }

    return 0;
}
