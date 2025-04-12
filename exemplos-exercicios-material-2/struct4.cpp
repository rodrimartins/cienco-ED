#include <iostream>

using namespace std;

define MAX_LIVROS = 100;

struct Livro {
    string titulo;
    string autor;
    int anoPublicacao;
    string disponivel;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    Livro livros[MAX_LIVROS];
    int totalLivros = 0;
    char continua = 'S';

    while (continua == 'S' || continua == 's') {

        cout << "Digite o t�tulo do livro: ";
        getline(cin, livros[totalLivros].titulo);

        cout << "Digite o autor do livro: ";
        getline(cin, livros[totalLivros].autor);

        cout << "Digite o ano de publica��o: ";
        cin >> livros[totalLivros].anoPublicacao;

        char resposta;
        cout << "O livro est� dispon�vel? (s/n): ";
        cin >> resposta;
        if (resposta == 's' || resposta == 'S') {
            livros[totalLivros].disponivel = "Sim";
        } else {
            livros[totalLivros].disponivel = "N�o";
        }

        cout << "Deseja continuar? (S-Sim | N-N�o): ";
        cin >> continua;
    }

    cout << "\n--- Lista de Livros Cadastrados ---" << endl;
    for (int i = 0; i < totalLivros; i++) {
        cout << "Livro " << i + 1 << ":" << endl;
        cout << "T�tulo: " << livros[i].titulo << endl;
        cout << "Autor: " << livros[i].autor << endl;
        cout << "Ano de Publica��o: " << livros[i].anoPublicacao << endl;
        cout << "Disponibilidade: " << livros[i].disponivel << endl;
        cout << "----------------------------------" << endl;
    }

    return 0;
}
