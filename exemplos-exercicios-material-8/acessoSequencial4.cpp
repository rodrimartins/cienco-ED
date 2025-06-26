#include <iostream>
#include <fstream>    // Biblioteca para manipula��o de arquivos
#include <string>     // Biblioteca para utilizar o tipo string e suas fun��es
using namespace std;

int main() {
    // Cria um objeto de leitura (ifstream) e abre o arquivo "dados.txt"
    ifstream arquivo("dados.txt");

    string linha, palavraChave = "prazo";
    int linhaAtual = 0;

    // Enquanto houver linhas no arquivo, execute o loop
    while (getline(arquivo, linha)) {
        linhaAtual++;  // Incrementa o n�mero da linha

        // Verifica se a palavra-chave est� presente na linha atual
        if (linha.find(palavraChave) != string::npos) { //find() para buscar uma substring dentro de uma string.
            // Se encontrada, exibe a linha e o n�mero correspondente
            cout << "Palavra '" << palavraChave << "' encontrada na linha " << linhaAtual << ": " << endl;
            cout << linha << endl;
        }
    }

    // Fecha o arquivo ap�s a leitura
    arquivo.close();

}



