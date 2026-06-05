#include <iostream>
#include <string>

using namespace std;

class Personagem {
private:
    string nome;
    int vida = 0;
    int mana = 0;

public:
    void setNome(const string& nome) {
        this->nome = nome;
    }

    void setVida(int vida) {
        if (vida >= 0) {
            this->vida = vida;
        }
    }

    void setMana(int mana) {
        if (mana >= 0) {
            this->mana = mana;
        }
    }

    void receberDano(int dano) {
        if (dano > 0) {
            vida -= dano;

            if (vida < 0) {
                vida = 0;
            }
        }
    }

    void curar(int quantidade) {
        if (quantidade > 0) {
            vida += quantidade;
        }
    }

    bool gastarMana(int quantidade) {
        if (quantidade <= 0) {
            return false;
        }

        if (mana >= quantidade) {
            mana -= quantidade;
            return true;
        }

        cout << "Mana insuficiente!\n";
        return false;
    }

    void recuperarMana(int quantidade) {
        if (quantidade > 0) {
            mana += quantidade;
        }
    }

    void mostrarStatus() const {
        cout << "\n===== STATUS =====\n";
        cout << "Nome: " << nome << '\n';
        cout << "Vida: " << vida << '\n';
        cout << "Mana: " << mana << '\n';
    }
};

int main() {
    Personagem guerreiro;

    guerreiro.setNome("Guerreiro");
    guerreiro.setVida(100);
    guerreiro.setMana(50);

    guerreiro.receberDano(30);
    guerreiro.gastarMana(20);
    guerreiro.curar(15);
    guerreiro.recuperarMana(10);

    guerreiro.mostrarStatus();

    return 0;
}

#include <iostream>

int main(int argc, char **argv)
{
	
	return 0;
}

