#include <iostream>
#include <cstdlib>

using namespace std;

//Ponteiro de Struct

typedef struct data {
	short dia;
	short mes;
	int ano;
} Data;

int main (void){
	Data data; //variável data do tipo struct data
	Data *hoje; //ponteiro hoje para um tipo struct data
	hoje = &data; //hoje aponta para o endereço de data

	//dados sendo inseridos na variável data
	(*hoje).dia = 20;
	(*hoje).mes = 1;
	(*hoje).ano = 2009;

	//hoje->dia = 20;
	//hoje->mes = 1;
	//hoje->ano = 2009;

	//mostrando o que está gravado no endereço contido em hoje
	cout << "Data registrada:" << endl;
	cout << hoje->dia <<"/"<< hoje->mes <<"/"<< hoje->ano << endl;
	system ("pause");
}


