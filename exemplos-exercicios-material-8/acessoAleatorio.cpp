#include <iostream>
#include <fstream>    // Biblioteca para manipula��o de arquivos (ifstream, ofstream, fstream)
using namespace std;

int main() {
    // Abre o arquivo "dados.bin" para leitura (ios::in) no modo bin�rio (ios::binary)
    fstream arquivo("dados2.bin", ios::in | ios::binary);

    int posicao = 5;

    // Vari�vel que armazenar� o valor lido do arquivo
    int valor;

    // Move o ponteiro de leitura para a posi��o desejada no arquivo
    // Cada inteiro ocupa sizeof(int) bytes; posi��o 2 significa o terceiro inteiro
    arquivo.seekg(posicao * sizeof(int));

    // L� um valor inteiro (sizeof(int) bytes) a partir da posi��o indicada
    // reinterpret_cast � usado para converter o endere�o de 'valor' para um ponteiro do tipo char*
    arquivo.read(reinterpret_cast<char*>(&valor), sizeof(int));

    // Exibe o valor encontrado na posi��o solicitada
    cout << "Valor na posi��o " << posicao << ": " << valor << endl;

    arquivo.close();
}







