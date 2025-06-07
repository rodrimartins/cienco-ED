#include <iostream>
#include <string>
#include <list>
#include <iterator>

using namespace std;

void imprimirLista(list<string> &lista)
{
	list<string>::const_iterator elemento;

	elemento = lista.begin();
	do{
		cout << *elemento << " ";
		elemento++;
	}
	while (elemento != lista.end());

}

int main(int argc, char** argv)
{
	string nome;
	list<string> lista;
	int tam = 0;

	cout << "Quantos funcionarios serao cadastrados?" << endl;
	cin >> tam;

	for (int i = 1; i <= tam; i++ ){
		cout << "Digite o nome do Funcionario: ";
		cin >> nome;
		lista.push_back(nome);
	}
	cout << endl;
	imprimirLista(lista);
	lista.sort();
	cout << endl;
	imprimirLista(lista);
	lista.reverse();
	cout << endl;
	imprimirLista(lista);
	lista.reverse();
	cout << endl;
	cout << "A quantidade de funcionarios cadastrados: " << lista.size();

	return 0;
}
