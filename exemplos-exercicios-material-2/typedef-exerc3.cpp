#include <iostream>
#include <string>
using namespace std;

// Definição da estrutura Endereco
typedef struct Endereco {
    string rua;
    string cidade;
    string CEP;
} TipoEndereco;


int main() {
    setlocale(LC_ALL, "Portuguese");

    // Declaração de uma variável do tipo TipoEndereco
    TipoEndereco endereco;

    cout << "Digite o nome da rua: ";
    getline(cin, endereco.rua);

    cout << "Digite o nome da cidade: ";
    getline(cin, endereco.cidade);

    cout << "Digite o CEP: ";
    getline(cin, endereco.CEP);

    // Exibindo as informações de endereço
    cout << "\nInformações do Endereço:\n";
    cout << "Rua: " << endereco.rua << endl;
    cout << "Cidade: " << endereco.cidade << endl;
    cout << "CEP: " << endereco.CEP << endl;

    return 0;
}
