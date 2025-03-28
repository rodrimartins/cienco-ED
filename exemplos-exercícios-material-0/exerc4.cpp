#include <iostream>

using namespace std;

int main()
{
	float salario, novoSalario;
	int reajuste;
	cout << "INFORME O SALARIO: ";
	cin >> salario;
	if (salario < 1000){
		reajuste = 15;
	}
	else if (salario <= 1500){
		reajuste = 10;
	}
	else{
		reajuste = 5;
	}

	novoSalario = salario + ((salario * reajuste) / 100);
	cout << "REAJUSTE: " << reajuste << "%" << endl;
	cout << "NOVO SALARIO: " << novoSalario << endl;

	return 0;
}
