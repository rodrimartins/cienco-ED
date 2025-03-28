#include <iostream>

using namespace std;

int main()
{
	float peso, alt, imc;
	cout << "Informe o seu peso:\n";
	cin >> peso;
	cout << "Informe a sua altura:\n";
	cin >> alt;
	imc = peso / (alt * alt);
	if (imc >= 25){
		cout << "Voce esta acima do peso" << endl;
	}
	else if (imc >= 20){
	cout << "Voce esta no peso ideal" << endl;
	}
	else{
	cout << "Voce esta abaixo do peso" << endl;
	}
	return 0;
}
