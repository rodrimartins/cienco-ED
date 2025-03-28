#include <iostream>

using namespace std;

//exemplo de ponteiro de array

int main(int argc, char** argv)
{
	int array[] = {1,2,3,4,5};
	int* pArray = &array[0];

	cout << *pArray << endl;
	cout << endl;

	for(int i=0;i<5;i++){
		cout << *pArray << endl;
		pArray++;
	}

	return 0;
}

