#include <iostream>
#include <string>
using namespace std;

typedef struct {
    string nome;
    int idade;
} Pessoa;  // Apelido para uma estrutura que representa uma pessoa

int main() {
    setlocale(LC_ALL, "Portuguese");

    Pessoa pessoa1;

    cout << "Digite o nome da pessoa: ";
    getline(cin, pessoa1.nome);

    cout << "Digite a idade da pessoa: ";
    cin >> pessoa1.idade;

    cout << "Nome: " << pessoa1.nome << ", Idade: " << pessoa1.idade << " anos" << endl;

    return 0;
}
