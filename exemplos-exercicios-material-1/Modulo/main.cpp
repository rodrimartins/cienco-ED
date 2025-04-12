#include <iostream>
#include "my_math.h"

using namespace std;

int main(int argc, char *argv[])
{
	int n = 0;
	
	cout << "Digite o numero para calcular: ";
	cin >> n;

	cout << "Fatorial de " << n << ": " << fatorial(n) << endl;
	cout << "Quadrado com lado " << n << ": " << area_quadrado(n) << endl;
	cout << "Area retangulo " << area_retangulo(n, n) << endl;
	return 0;
}


