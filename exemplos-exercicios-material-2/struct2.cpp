#include <iostream>

using namespace std;

struct Pessoa
{
    string nome;
	int idade;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
	Pessoa pessoa;

	cout << "Qual seu nome? ";
	getline(cin, pessoa.nome); //Lê uma linha inteira de caracteres de um fluxo de entrada
	//cin >> pessoa.nome;

	cout << "Quantos anos voce tem? ";
	cin >> pessoa.idade;

    cout << "Nome: " << pessoa.nome << endl;
    cout << "Idade: " << pessoa.idade << " anos" << endl;
	return 0;
}


