#include <iostream>
#include <string>
using namespace std;

// Definição da estrutura Pessoa
struct Pessoa {
    string nome;
    string endereco;
    string CPF;
    int idade;
};

int main() {

     setlocale(LC_ALL, "Portuguese");
    // Declarando um vetor de Pessoas com tamanho 5
    Pessoa pessoas[5];

    // Preenchendo as informações das 5 pessoas
    for (int i = 0; i < 5; i++) {
        cout << "Digite o nome da pessoa " << i + 1 << ": ";
        getline(cin, pessoas[i].nome);

        cout << "Digite o endereço da pessoa " << i + 1 << ": ";
        getline(cin, pessoas[i].endereco);

        cout << "Digite o CPF da pessoa " << i + 1 << ": ";
        cin >> pessoas[i].CPF;

        cout << "Digite a idade da pessoa " << i + 1 << ": ";
        cin >> pessoas[i].idade;

        // Limpar o buffer do teclado
        cin.ignore();
    }

    // Exibindo as informações das 5 pessoas
    cout << "\nInformações das 5 pessoas:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Pessoa " << i + 1 << ":\n";
        cout << "Nome: " << pessoas[i].nome << endl;
        cout << "Endereço: " << pessoas[i].endereco << endl;
        cout << "CPF: " << pessoas[i].CPF << endl;
        cout << "Idade: " << pessoas[i].idade << " anos" << endl << endl;
    }

    return 0;
}
