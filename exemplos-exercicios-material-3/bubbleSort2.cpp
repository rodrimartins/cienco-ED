#include <iostream>

using namespace std;


void imprimeVetor(int vetor[]){
    int i;
    cout << endl;
    for (i = 0; i < 5; i++){
        cout << " | " << vetor[i] << " | ";
    }
}


void bubbleSort2(int x[])
{
	int aux = 0;
	//ordenando de forma crescente
	//laço com a quantidade de elementos do vetor - 1
	for (int j = 1; j <= 4; j++)
	{
		//laço que percorre da última posição
		//até posição j do vetor
		for (int i = 4; i >= j; i--)
		{
			if (x[i] < x[i - 1])
			{
				aux = x[i];
				x[i] = x[i - 1];
				x[i - 1] = aux;
			}
		}
	}

}

int main()
{
	int x[5];

	//carregando os números no vetor
	for (int i = 0; i <= 4; i++)
	{
		cout << "Digite o numero" << endl;
		cin >> x[i];
	}

    imprimeVetor(x); //antes da troca
    cout << endl;
	bubbleSort2(x);
	imprimeVetor(x); //depois da troca

	return 0;
}



