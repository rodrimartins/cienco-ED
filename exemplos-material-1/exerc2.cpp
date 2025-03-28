#include <iostream>

using namespace std;

int main()
{
	int idade;
	cout << "Informe a idade do nadador: ";
	cin >> idade;
	if (idade <= 4){
		cout << "Fora de Categoria" << endl;;
	}
	else if (idade <= 7){
		cout << "Infantil A" << endl;
	}
	else if (idade <= 10){
		cout << "Infantil B" << endl;
	}
	else if (idade <= 13){
		cout << "Juvenil A" << endl;
	}
	else if (idade <= 17){
		cout << "Juvenil B" << endl;
	}
	else{
		cout << "Senior" << endl;
	}
	return 0;
}
