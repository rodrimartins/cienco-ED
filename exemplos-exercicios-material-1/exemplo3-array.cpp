#include <iostream>

using namespace std;

int main()
{
	//char nome[] = {'r', 'o', 'd', 'r', 'i', 'g', 'o', '\0'};
	char nome[] = "rodrigo";
	int i = 0;
	/*
	'\0' é um caracter null, com o valor numérico 0 é considerado false
	Uma string é um array de caracteres, apesar de ser um array,
	deve-se ficar atento para o fato de que as strings têm no elemento
	seguinte a última letra da palavra/frase armazenada, um caractere '\0'.
	*/

	//while (nome[i])
	while (nome[i] != '\0')
	{
		cout << nome[i];
		i++;
	}
	return 0;
}


