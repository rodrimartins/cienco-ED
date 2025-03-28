#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	short usVar = 200;
	long ulVar = 300;
	int iVar = 400;
	cout << "*** Valores e enderecos ***" << endl;
	cout << "usVar: Valor = " << usVar << ", Endereco = " << &usVar << endl;
	cout << "ulVar: Valor = " << ulVar << ", Endereco = " << &ulVar << endl;
	cout << "iVar: Valor = " << iVar << ", Endereco = "	<< &iVar << endl;
 	 return 0; 
}

