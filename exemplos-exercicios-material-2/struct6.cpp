#include <iostream>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    float nota;
};

int main() {

    setlocale(LC_ALL, "Portuguese");
    Aluno aluno;
    char continuar;

    do {
        cout << "Digite o nome do aluno: ";
        getline(cin, aluno.nome);
        cout << "Digite a nota do aluno: ";
        cin >> aluno.nota;

        cout << "Aluno: " << aluno.nome << " - Nota: " << aluno.nota << endl;

        cout << "Deseja adicionar outro aluno? (s/n): ";
        cin >> continuar;
        cin.ignore();  // Limpa o buffer após a entrada do caractere

    } while (continuar == 's' || continuar == 'S');

    return 0;
}


