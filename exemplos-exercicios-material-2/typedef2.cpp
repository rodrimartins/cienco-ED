#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> VetorInteiros;  // Apelido para um vetor de inteiros

int main() {
    setlocale(LC_ALL, "Portuguese");
    int tamanho;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    VetorInteiros numeros(tamanho);


    for (int i = 0; i < tamanho; i++) {
            cout << "Digite os n�meros do vetor:" << endl;
        cin >> numeros[i];
    }

    cout << "N�meros: ";

   for (int num : numeros) {
       cout << num << " ";
    }


    cout << endl;
    return 0;
}


