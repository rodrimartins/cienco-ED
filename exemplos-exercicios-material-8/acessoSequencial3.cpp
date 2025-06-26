#include <iostream>
#include <fstream>    // Biblioteca para manipula��o de arquivos
using namespace std;

int main() {
    // Cria um objeto de leitura de arquivo e abre o arquivo "numeros.txt"
    ifstream arquivo("numeros.txt");

    // Declara vari�veis: n�mero (valor lido), soma acumulada, e quantidade de n�meros lidos
    int numero, soma = 0, quantidade = 0;

    // L� os n�meros do arquivo um por um, enquanto houver dados v�lidos
    while (arquivo >> numero) {
        soma += numero;     // Acumula o valor lido na soma
        quantidade++;       // Conta quantos n�meros foram lidos
    }

    // Verifica se algum n�mero foi lido para evitar divis�o por zero
    if (quantidade > 0)
        // Calcula e exibe a m�dia dos n�meros, convertendo para float para evitar truncamento inteiro
        cout << "M�dia dos valores: " << (soma / static_cast<float>(quantidade)) << endl;
    else
        // Caso o arquivo esteja vazio ou n�o contenha n�meros v�lidos
        cout << "Arquivo vazio ou inv�lido." << endl;

    // Fecha o arquivo
    arquivo.close();

    return 0;
}


