#include <iostream>
using namespace std;

void troca(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
	int a, b;
	cout << "Entre com dois números: ";
	cin >> a >> b;
	cout << "Você entrou com " << a << " e " << b << endl;

// Troca a com b
	troca(a, b);
	cout << "Trocados, eles são " << a << " e " << b << endl;
}
