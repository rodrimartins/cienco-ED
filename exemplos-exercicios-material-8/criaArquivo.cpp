#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Vetor de inteiros que será gravado no arquivo
    int numeros[] = {10, 20, 30, 40, 50, 60};

    // Abre (ou cria) o arquivo "dados2.bin" para escrita em modo binário
    ofstream arquivo("dados2.bin", ios::out | ios::binary);

    // Verifica se o arquivo foi aberto corretamente
    if (!arquivo) {
        cout << "Erro ao criar o arquivo." << endl;
        return 1;
    }

    // Escreve todo o vetor no arquivo de uma vez
    arquivo.write(reinterpret_cast<char*>(numeros), sizeof(numeros));

    // Fecha o arquivo
    arquivo.close();

    cout << "Arquivo 'dados2.bin' criado com sucesso!" << endl;
}



