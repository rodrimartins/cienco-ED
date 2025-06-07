#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numeros; // Cria uma lista vazia de inteiros

    // Solicita ao usuário que digite 5 números inteiros
    cout << "Digite 5 numeros inteiros:\n";
    for (int i = 0; i < 5; ++i) {
        int numero;
        cout << "Numero " << i + 1 << ": ";
        cin >> numero;
        numeros.push_back(numero); // Insere o número na lista
    }

    // Imprime os números da lista na ordem de inserção
    cout << "\nNumeros na ordem de insercao: ";
    for (int num : numeros) {
        cout << num << " ";
    }

    // Imprime os números da lista em ordem inversa usando um iterador reverso
    cout << "\nNumeros em ordem inversa: ";
    for (auto it = numeros.rbegin(); it != numeros.rend(); ++it) {
        cout << *it << " ";
    }

    cout << endl;
    return 0;
}


