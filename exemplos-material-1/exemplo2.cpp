#include <iostream>
#include <locale.h>

using namespace std;

//protótipo da função
bool par(int num);
void mensagem();

int main()
{
	/*
	 comando de regionalização do C++ para que não somente acentue as palavras
	 corretamente, mas que mostre datas e horas em português.*/
	setlocale(LC_ALL, "Portuguese");
	int n = 0;

	mensagem();

	cout << "Digite um número: ";
	cin >> n;

	if (par(n))
	{
		cout << "O número " << n << " é par" << endl;
	}
	else
	{
		cout << "O numero " << n << " eh impar" << endl;
	}
	return 0;
}
bool par(int num)
{
	if (num % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void mensagem()
{
	cout << "Aula do Material 2" << endl;
	cout << endl;
}








