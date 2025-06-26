#include <iostream>
#include <fstream>    // Biblioteca para manipulação de arquivos (ifstream, ofstream, fstream)
using namespace std;

int main() {
    // Abre o arquivo "dados.bin" para leitura (ios::in) no modo binário (ios::binary)
    fstream arquivo("dados2.bin", ios::in | ios::binary);

    int posicao = 5;

    // Variável que armazenará o valor lido do arquivo
    int valor;

    // Move o ponteiro de leitura para a posição desejada no arquivo
    // Cada inteiro ocupa sizeof(int) bytes; posição 2 significa o terceiro inteiro
    arquivo.seekg(posicao * sizeof(int));

    // Lê um valor inteiro (sizeof(int) bytes) a partir da posição indicada
    // reinterpret_cast é usado para converter o endereço de 'valor' para um ponteiro do tipo char*
    arquivo.read(reinterpret_cast<char*>(&valor), sizeof(int));

    // Exibe o valor encontrado na posição solicitada
    cout << "Valor na posição " << posicao << ": " << valor << endl;

    arquivo.close();
}







