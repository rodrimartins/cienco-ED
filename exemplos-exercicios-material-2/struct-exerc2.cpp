#include <iostream>
#include <string>

using namespace std;

struct Livro {
    string titulo;
    string autor;
    int anoPublicacao;
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    Livro livro;
    string tituloParada = "Fim";

    do {
        cout << "Digite o título do livro: ";
        getline(cin, livro.titulo);
        if (livro.titulo == tituloParada) {
            break;
        }
        cout << "Digite o autor do livro: ";
        getline(cin, livro.autor);
        cout << "Digite o ano de publicação: ";
        cin >> livro.anoPublicacao;
        cin.ignore();

        cout << "Livro: " << livro.titulo << ", Autor: " << livro.autor << ", Ano: " << livro.anoPublicacao << endl;

    } while (true);

    return 0;
}
