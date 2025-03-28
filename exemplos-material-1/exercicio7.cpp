#include <iostream>

using namespace std;


int main() {

    setlocale(LC_ALL, "Portuguese");
    int vetor[10];

    // Preenchendo o vetor com valores fornecidos pelo usuário
    cout << "Digite 10 valores inteiros para o vetor:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> *(vetor + i);
    }

    // Imprimindo o vetor na ordem normal usando ponteiros
    cout << "Vetor na ordem normal:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << *(vetor + i) << " ";
    }

    // Imprimindo o vetor na ordem inversa usando ponteiros
    cout << endl << "Vetor na ordem inversa:" << endl;
    for (int i = 9; i >= 0; i--) {
        cout << *(vetor + i) << " ";
    }

    return 0;
}


