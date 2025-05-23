#include <iostream>

#define TAM 10

using namespace std;

void imprimeVetor(int vetor[]){
	int i;
	cout << endl;
	for (i = 0; i < TAM; i++){
		cout << " |" << vetor[i] << "| ";
	}
}

void quickSort(int vetor[TAM], int inicio, int fim){
	int pivo, esq, dir, meio, aux;

	//limites da esquerda e direita da região analisada
	esq = inicio;
	dir = fim;

	//ajustando auxiliares do centro
	meio = (int) ((esq + dir) / 2);
	pivo = vetor[meio];

	while(dir > esq){
		while(vetor[esq] < pivo){
			esq = esq + 1;
		}

		while (vetor[dir] > pivo){
			dir = dir - 1;
		}

		if (esq <= dir){
			//realiza uma troca
			aux = vetor[esq];
			vetor[esq] = vetor[dir];
			vetor[dir] = aux;

			//faz os limites laterais caminharem para o centro
			esq = esq + 1;
			dir = dir - 1;
		}
	}

	//recursão para continuar ordenando
	if (inicio < dir){
		quickSort(vetor, inicio, dir);
	}

	if (esq < fim){
		quickSort(vetor, esq, fim);
	}

}

int main(){

	int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

	imprimeVetor(vetor);
	cout << endl;

	quickSort(vetor, 0, TAM);
	imprimeVetor(vetor);

}

