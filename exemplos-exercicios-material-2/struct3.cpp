#include <iostream>

using namespace std;

struct Carro {
    string marca;
    string modelo;
    int ano;
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    Carro carro;
    cout << "Digite a marca do carro: ";
    getline(cin, carro.marca);
    cout << "Digite o modelo do carro: ";
    getline(cin, carro.modelo);
    cout << "Digite o ano do carro: ";
    cin >> carro.ano;

    cout << "Carro: " << carro.marca << " " << carro.modelo << ", Ano: " << carro.ano << endl;
    return 0;
}


