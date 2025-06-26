#include <iostream>
#include <fstream>    // Biblioteca para manipulação de arquivos (ifstream, ofstream)
using namespace std;

int main() {
    // Nome do arquivo binário que será criado e lido
    const char* nomeArquivo = "valores.bin";

    // Vetor com 10 valores inteiros que serão gravados no arquivo
    int vetor[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

    // Abre o arquivo para escrita binária
    ofstream saida(nomeArquivo, ios::binary);
    if (!saida) { // Verifica se o arquivo foi criado corretamente
        cout << "Erro ao criar o arquivo!" << endl;
        return 1; // Encerra o programa com código de erro
    }

    // Grava todos os inteiros do vetor no arquivo de uma só vez
    // reinterpret_cast converte o ponteiro int* para char*, necessário para write()
    saida.write(reinterpret_cast<char*>(vetor), sizeof(vetor));

    // Fecha o arquivo de saída
    saida.close();

    // Solicita ao usuário que informe uma posição entre 0 e 9
    int posicao;
    cout << "Digite uma posição de 0 a 9 para ler o valor: ";
    cin >> posicao;

    // Valida se a posição digitada está dentro do intervalo permitido
    if (posicao < 0 || posicao >= 10) {
        cout << "Posição inválida! Deve estar entre 0 e 9." << endl;
        return 1; // Encerra o programa com erro
    }

    // Abre o arquivo para leitura em modo binário
    ifstream entrada(nomeArquivo, ios::binary);
    if (!entrada) { // Verifica se o arquivo foi aberto corretamente
        cerr << "Erro ao abrir o arquivo para leitura!" << endl;
        return 1;
    }

    // Declara variável que armazenará o valor lido
    int valor;

    // Move o ponteiro de leitura até a posição desejada
    // Cada inteiro ocupa sizeof(int) bytes, então a posição é multiplicada
    entrada.seekg(posicao * sizeof(int));

    // Lê o valor da posição desejada
    entrada.read(reinterpret_cast<char*>(&valor), sizeof(int));

    // Exibe o valor lido para o usuário
    cout << "Valor na posição " << posicao << ": " << valor << endl;

    // Fecha o arquivo de entrada
    entrada.close();
}



