#include <iostream>

using namespace std;


int var = 0;

void passagemPorReferencia(int* n){ // *n aponta para o endereço de pvar
	*n = 20;
}

int main(int argc, char** argv)
{
	var = 10;

	int *pvar;
	pvar = &var;
	
	passagemPorReferencia(pvar);
	
	cout << var << endl;
	return 0;
}

