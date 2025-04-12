#include <iostream>
using namespace std;

// Definição da enumeração Cores
enum Cores {
    VERMELHO,
    VERDE,
    AZUL
};

// Typedef para TipoCor
typedef Cores TipoCor;

int main() {
    setlocale(LC_ALL, "Portuguese");

    TipoCor corEscolhida;

    int escolha;
    cout << "Escolha uma cor (0 para vermelho, 1 para verde, 2 para azul): ";
    cin >> escolha;

    if (escolha == 0) {
        corEscolhida = VERMELHO;
    } else if (escolha == 1) {
        corEscolhida = VERDE;
    } else if (escolha == 2) {
        corEscolhida = AZUL;
    } else {
        cout << "Escolha inválida!" << endl;
        return 1;
    }

    cout << "Cor escolhida: ";
    switch (corEscolhida) {
        case VERMELHO: cout << "Vermelho"; break;
        case VERDE: cout << "Verde"; break;
        case AZUL: cout << "Azul"; break;
    }
    cout << endl;

    return 0;
}
