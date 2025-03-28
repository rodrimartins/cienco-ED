#include <iostream>

using namespace std;

//escopo global
int var = 0;

void passagemPorValor(int var){
	var = 20;
}

int main(int argc, char** argv)
{
	var = 10;
	int *pvar;

	pvar = &var;

	passagemPorValor(var);

	cout << var << endl;
	return 0;
}

