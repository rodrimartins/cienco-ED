#include <iostream>

using namespace std;

#define NOTAS 5

float mediaValoresVetor(double vet[], int tam)
{
	float soma = 0;

	for (int i = 0; i < NOTAS; i++)
	{
		soma += vet[i];
	}
	return soma / tam;
}

int main()
{
	double vet[NOTAS], acima = 0;
	double media;

	for (int i = 0; i < NOTAS; i++)
	{
		cout << "Digite a nota " << i + 1 << ": "  << endl;
		cin >> vet[i];
	}

	media = mediaValoresVetor(vet, NOTAS);
	cout << "Media: " << media << endl;

	for (int i = 0; i < NOTAS; i++)
	{
		if (vet[i] > media)
		{
			acima++;
		}
	}
	cout << "Valores acima da media: " << acima << endl;
	cout << "Valores abaixo da media: " << NOTAS - acima;

	return 0;
}


