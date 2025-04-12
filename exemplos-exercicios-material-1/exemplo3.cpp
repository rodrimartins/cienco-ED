#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
	int n1, n2, temp;
	cout << "Entre com o número 1: ";
	cin >> n1;
	cout << "Entre com o número 2: ";
	cin >> n2;
	cout << "Você entrou com " << n1 << " e " << n2 << endl;
	/* Troca a com b */
	temp = n1;
	n1 = n2;
	n2 = temp;
	cout << "Trocados, eles são " << n1 << " e " << n2 << endl;
}


