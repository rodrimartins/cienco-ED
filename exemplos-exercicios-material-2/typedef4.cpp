#include <iostream>

using namespace std;

typedef struct data
{
	int dia;
	int mes;
	int ano;
} Data;

typedef struct aniversario
{
	string nome;
	Data nascimento;
} Aniversario;

int main ()
{
    setlocale(LC_ALL, "Portuguese");
	Aniversario alguem;
	cout << "Digite o nome de alguem" << endl;
	getline(cin,alguem.nome);
	cout << "Digite o dia que esta pessoa nasceu" << endl;
	cin >> alguem.nascimento.dia;
	cout << "Digite o mes que esta pessoa nasceu" << endl;
	cin >> alguem.nascimento.mes;
	cout << "Digite o ano que esta pessoa nasceu" << endl;
	cin >> alguem.nascimento.ano;
	system ("cls");

	cout << alguem.nome << endl;
	cout << "nasceu em ";
	cout << alguem.nascimento.dia << "/";
	cout << alguem.nascimento.mes << "/";
	cout << alguem.nascimento.ano << endl;

	return 0;
}


