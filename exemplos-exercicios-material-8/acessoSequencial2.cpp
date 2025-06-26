#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream arquivo("dados.txt");
    string linha;
    int contador = 0;

    while (getline(arquivo, linha)) {
        cout << "Linha " << ++contador << ": " << linha << endl;
    }

    cout << "\nTotal de linhas: " << contador << endl;
    arquivo.close();
    return 0;
}


