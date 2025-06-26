#include <iostream>
#include <fstream>    // Biblioteca para manipulação de arquivos
#include <string>
using namespace std;

int main() {
    // Cria um objeto de entrada (ifstream) e abre o arquivo "dados.txt"
    ifstream arquivo("dados.txt");

    // Variável para armazenar temporariamente cada linha lida do arquivo
    string linha;

    // Enquanto for possível ler uma linha do arquivo, execute o bloco
    while (getline(arquivo, linha)) {
        // Exibe a linha lida no console
        cout << linha << endl;
    }

    // Fecha o arquivo após a leitura
    arquivo.close();
}


