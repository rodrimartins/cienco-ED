#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void imprimiLista(list<int> lista)
{

	list<int>::const_iterator valores; // [classe]::[metodo]

	if (lista.empty())
	{
		cout << "IMPOSSIVEL IMPRESSAO - LISTA VAZIA";
	}
	else {
		valores = lista.begin(); //aponta para o 1º elemento da lista
        do{
            cout << *valores << " ";
			valores++;
		}
		while (valores != lista.end());
	}
}


int main(int argc, char** argv)
{
	list<int> lista;

	lista.push_front(1); // [1]
	lista.push_front(10); // [10,1]
	lista.push_back(2); //[10,1,2]
	lista.push_back(20); //[10,1,2,20]
	lista.push_front(5); //[5,10,1,2,20]
	imprimiLista(lista);

	cout << endl;

	cout << "Itens na lista: " << lista.size() << " valores " << endl;
	lista.sort(); // [1,2,5,10,20]

	cout << endl;
	imprimiLista(lista);

	cout << endl;
	lista.reverse(); //[20,10,5,2,1]
	imprimiLista(lista);

	lista.push_front(100); //[100,20,10,5,2,1]
	lista.push_back(55); //[100,20,10,5,2,1,55]

	cout << endl;
	imprimiLista(lista);

	lista.sort(); //[1,2,5,10,20,55,100]
	cout << endl;
	imprimiLista(lista);

	lista.push_back(55); //[1,2,5,10,20,55,100,55]

	cout << endl;
	imprimiLista(lista);

	lista.remove(55);//[1,2,5,10,20,100]
	cout << endl;
	imprimiLista(lista);

	return 0;
}
