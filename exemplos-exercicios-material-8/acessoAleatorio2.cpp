#include <iostream>
#include <fstream>    // Biblioteca para manipula��o de arquivos (ifstream, ofstream)
using namespace std;

int main() {
    // Nome do arquivo bin�rio que ser� criado e lido
    const char* nomeArquivo = "valores.bin";

    // Vetor com 10 valores inteiros que ser�o gravados no arquivo
    int vetor[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

    // Abre o arquivo para escrita bin�ria
    ofstream saida(nomeArquivo, ios::binary);
    if (!saida) { // Verifica se o arquivo foi criado corretamente
        cout << "Erro ao criar o arquivo!" << endl;
        return 1; // Encerra o programa com c�digo de erro
    }

    // Grava todos os inteiros do vetor no arquivo de uma s� vez
    // reinterpret_cast converte o ponteiro int* para char*, necess�rio para write()
    saida.write(reinterpret_cast<char*>(vetor), sizeof(vetor));

    // Fecha o arquivo de sa�da
    saida.close();

    // Solicita ao usu�rio que informe uma posi��o entre 0 e 9
    int posicao;
    cout << "Digite uma posi��o de 0 a 9 para ler o valor: ";
    cin >> posicao;

    // Valida se a posi��o digitada est� dentro do intervalo permitido
    if (posicao < 0 || posicao >= 10) {
        cout << "Posi��o inv�lida! Deve estar entre 0 e 9." << endl;
        return 1; // Encerra o programa com erro
    }

    // Abre o arquivo para leitura em modo bin�rio
    ifstream entrada(nomeArquivo, ios::binary);
    if (!entrada) { // Verifica se o arquivo foi aberto corretamente
        cerr << "Erro ao abrir o arquivo para leitura!" << endl;
        return 1;
    }

    // Declara vari�vel que armazenar� o valor lido
    int valor;

    // Move o ponteiro de leitura at� a posi��o desejada
    // Cada inteiro ocupa sizeof(int) bytes, ent�o a posi��o � multiplicada
    entrada.seekg(posicao * sizeof(int));

    // L� o valor da posi��o desejada
    entrada.read(reinterpret_cast<char*>(&valor), sizeof(int));

    // Exibe o valor lido para o usu�rio
    cout << "Valor na posi��o " << posicao << ": " << valor << endl;

    // Fecha o arquivo de entrada
    entrada.close();
}



