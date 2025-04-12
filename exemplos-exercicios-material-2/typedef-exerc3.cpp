#include <iostream>
#include <string>
using namespace std;

// Defini��o da estrutura Endereco
typedef struct Endereco {
    string rua;
    string cidade;
    string CEP;
} TipoEndereco;


int main() {
    setlocale(LC_ALL, "Portuguese");

    // Declara��o de uma vari�vel do tipo TipoEndereco
    TipoEndereco endereco;

    cout << "Digite o nome da rua: ";
    getline(cin, endereco.rua);

    cout << "Digite o nome da cidade: ";
    getline(cin, endereco.cidade);

    cout << "Digite o CEP: ";
    getline(cin, endereco.CEP);

    // Exibindo as informa��es de endere�o
    cout << "\nInforma��es do Endere�o:\n";
    cout << "Rua: " << endereco.rua << endl;
    cout << "Cidade: " << endereco.cidade << endl;
    cout << "CEP: " << endereco.CEP << endl;

    return 0;
}
