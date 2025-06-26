#include <iostream>
#include <fstream>    // Biblioteca para manipulação de arquivos
using namespace std;

int main() {
    // Cria um objeto de leitura de arquivo e abre o arquivo "numeros.txt"
    ifstream arquivo("numeros.txt");

    // Declara variáveis: número (valor lido), soma acumulada, e quantidade de números lidos
    int numero, soma = 0, quantidade = 0;

    // Lê os números do arquivo um por um, enquanto houver dados válidos
    while (arquivo >> numero) {
        soma += numero;     // Acumula o valor lido na soma
        quantidade++;       // Conta quantos números foram lidos
    }

    // Verifica se algum número foi lido para evitar divisão por zero
    if (quantidade > 0)
        // Calcula e exibe a média dos números, convertendo para float para evitar truncamento inteiro
        cout << "Média dos valores: " << (soma / static_cast<float>(quantidade)) << endl;
    else
        // Caso o arquivo esteja vazio ou não contenha números válidos
        cout << "Arquivo vazio ou inválido." << endl;

    // Fecha o arquivo
    arquivo.close();

    return 0;
}


