#include <iostream>
using namespace std;

// Definição do typedef para VetorInteiros
typedef int VetorInteiros[5];

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Declaração de uma variável do tipo VetorInteiros
    VetorInteiros numeros;

    cout << "Digite 5 números inteiros separados por espaço: ";
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    // Exibindo os valores do vetor
    cout << "\nValores do Vetor:\n";
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
