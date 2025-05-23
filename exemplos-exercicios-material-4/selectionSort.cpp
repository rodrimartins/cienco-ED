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

void selectionSort(int vetor[TAM]){
	int posicaoMenorValor, aux, i, j;

	for(i = 0; i < TAM; i++){
		//recebe a posição inicial para o menor valor
		posicaoMenorValor = i;

		for(j = i + 1; j < TAM; j++){
			//caso encontre um valor menor na frente dos analisados
			if(vetor[j] < vetor[posicaoMenorValor]){
				posicaoMenorValor = j;
			}
		}

		//verifica se houve mudança e troca os valores
		if (posicaoMenorValor != i){
			aux = vetor[i];
			vetor[i] = vetor[posicaoMenorValor];
			vetor[posicaoMenorValor] = aux;
		}
	}
}

int main(){

	int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

	imprimeVetor(vetor);
	cout << endl;

	selectionSort(vetor);
	imprimeVetor(vetor);

}

