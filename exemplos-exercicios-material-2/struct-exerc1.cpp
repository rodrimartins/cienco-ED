#include <iostream>
#include <string>

using namespace std;

struct Paciente {
    string nome;
    int idade;
    string sintoma;
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    Paciente paciente;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        cout << "Digite o nome do paciente: ";
        getline(cin, paciente.nome);
        cout << "Digite a idade do paciente: ";
        cin >> paciente.idade;
        cin.ignore();
        cout << "Digite o sintoma do paciente: ";
        getline(cin, paciente.sintoma);

        cout << "Nome: " << paciente.nome << ", Idade: " << paciente.idade << ", Sintoma: " << paciente.sintoma << endl;

        cout << "Deseja adicionar outro paciente? (s/n): ";
        cin >> continuar;
        cin.ignore();
    }

    return 0;
}
