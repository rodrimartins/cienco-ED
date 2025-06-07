#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numeros; // Cria uma lista vazia de inteiros

    // Solicita ao usu�rio que digite 5 n�meros inteiros
    cout << "Digite 5 numeros inteiros:\n";
    for (int i = 0; i < 5; ++i) {
        int numero;
        cout << "Numero " << i + 1 << ": ";
        cin >> numero;
        numeros.push_back(numero); // Insere o n�mero na lista
    }

    // Imprime os n�meros da lista na ordem de inser��o
    cout << "\nNumeros na ordem de insercao: ";
    for (int num : numeros) {
        cout << num << " ";
    }

    // Imprime os n�meros da lista em ordem inversa usando um iterador reverso
    cout << "\nNumeros em ordem inversa: ";
    for (auto it = numeros.rbegin(); it != numeros.rend(); ++it) {
        cout << *it << " ";
    }

    cout << endl;
    return 0;
}


