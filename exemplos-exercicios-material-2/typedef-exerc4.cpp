#include <iostream>
using namespace std;

// Defini��o do typedef para VetorInteiros
typedef int VetorInteiros[5];

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Declara��o de uma vari�vel do tipo VetorInteiros
    VetorInteiros numeros;

    cout << "Digite 5 n�meros inteiros separados por espa�o: ";
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
