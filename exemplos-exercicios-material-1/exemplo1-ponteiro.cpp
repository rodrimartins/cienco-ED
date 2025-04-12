#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int var = 10;
	int *pvar;
	pvar = &var;
	*pvar = 20;
	cout << *pvar << endl;
	cout << var << endl;
	cout << &*pvar << endl;
	return 0;
}


