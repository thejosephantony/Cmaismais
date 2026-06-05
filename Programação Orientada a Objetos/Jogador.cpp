#include <iostream>
#include <string>

using namespace std;

class Jogador {
public:
    string nome;
    int vida;
    int ataque;

    void atacar(Jogador& inimigo) {
        cout << nome << " atacou " << inimigo.nome
             << " causando " << ataque << " de dano.\n";

        inimigo.receberDano(ataque);
    }

    void receberDano(int dano) {
        vida -= dano;

        if (vida < 0) {
            vida = 0;
        }
    }

    void mostrarStatus() {
        cout << "\n=== STATUS ===\n";
        cout << "Nome: " << nome << '\n';
        cout << "Vida: " << vida << '\n';
        cout << "Ataque: " << ataque << '\n';
    }
};

int main() {
    Jogador jogador1;
    jogador1.nome = "Guerreiro";
    jogador1.vida = 100;
    jogador1.ataque = 20;

    Jogador jogador2;
    jogador2.nome = "Arqueiro";
    jogador2.vida = 80;
    jogador2.ataque = 25;

    jogador1.mostrarStatus();
    jogador2.mostrarStatus();

    cout << "\n--- BATALHA ---\n\n";

    jogador1.atacar(jogador2);
    jogador2.atacar(jogador1);

    jogador1.atacar(jogador2);
    jogador2.atacar(jogador1);

    jogador1.mostrarStatus();
    jogador2.mostrarStatus();

    if (jogador1.vida > jogador2.vida) {
        cout << "\nVencedor: " << jogador1.nome << '\n';
    }
    else if (jogador2.vida > jogador1.vida) {
        cout << "\nVencedor: " << jogador2.nome << '\n';
    }
    else {
        cout << "\nEmpate!\n";
    }

    return 0;
}
#include <iostream>

int main(int argc, char **argv)
{
	
	return 0;
}

