#include <iostream>
#include <string>

using namespace std;

// Definição da estrutura Animal
typedef struct Animal {
    string nome;
    string especie;
    int idade;
    float peso;
} ListaAnimais;



int main() {

    setlocale(LC_ALL, "Portuguese");
    // Declarando a lista de animais
    ListaAnimais animais[10];

    // Solicitando ao usuário que insira os dados de 10 animais
    for (int i = 0; i < 10; i++) {
        cout << "Animal " << i + 1 << ":\n";
        cout << "Nome: ";
        getline(cin, animais[i].nome);
        cout << "Espécie: ";
        getline(cin, animais[i].especie);
        cout << "Idade: ";
        cin >> animais[i].idade;
        cout << "Peso (em kg): ";
        cin >> animais[i].peso;

        // Limpar o buffer do teclado
        cin.ignore();
    }

    // Exibindo os dados dos animais
    cout << "\nDados dos animais:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Animal " << i + 1 << ":\n";
        cout << "Nome: " << animais[i].nome << endl;
        cout << "Espécie: " << animais[i].especie << endl;
        cout << "Idade: " << animais[i].idade << " anos" << endl;
        cout << "Peso: " << animais[i].peso << " kg" << endl << endl;
    }

    return 0;
}
