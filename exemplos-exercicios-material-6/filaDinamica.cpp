#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char** argv)
{
	/*
	empty = vazio
	size = tamanho
	front = primeiro da fila
	back = ultimo da fila
	push = adiciona na fila
	pop = tira da fila
	*/

	queue <string> pessoas;

	pessoas.push("RODRIGO"); //push adiciona elementos na fila
	pessoas.push("ANDRE");
	pessoas.push("MARIA");
	pessoas.push("ANA");
	pessoas.push("JOSE");
	pessoas.push("RITA");

		// size mostra o tamanho da fila
	cout << "Tamanho da Fila: " << pessoas.size() << endl;
	cout << "Primeira pessoa " << pessoas.front() << endl;
	cout << "Ultima pessoa " << pessoas.back() << endl << endl;


	while(!pessoas.empty()){
		cout << "Primeira pessoa " << pessoas.front() << endl;
		pessoas.pop();	// retira elementos da pilha
	}


	return 0;
}

