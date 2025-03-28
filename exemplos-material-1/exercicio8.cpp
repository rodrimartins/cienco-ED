#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");
    const int tamanhoArray = 5;
    int array[tamanhoArray];

    // Preenchendo o array com valores fornecidos pelo usuário
    cout << "Digite " << tamanhoArray << " valores inteiros para o array:" << endl;
    for (int i = 0; i < tamanhoArray; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> *(array + i);
    }

    // Calculando a média dos valores do array usando ponteiros
    int soma = 0;
    for (int i = 0; i < tamanhoArray; i++) {
        soma += *(array + i);
    }

    // o operador static_cast, converte a variável soma em um valor do tipo float.
    // Dessa forma, o resultado da divisão também será do tipo float.
    float media = static_cast<float>(soma) / tamanhoArray;

    // Imprimindo a média dos valores do array
    cout << "A média dos valores do array é " << media << endl;

    return 0;
}


