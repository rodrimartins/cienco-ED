#include <iostream>
#include<stdlib.h>

using namespace std;
int main()
{
	int menu = 1;
	float candidato1 = 0, candidato2 = 0, nulos = 0, brancos = 0, total = 0;
	while (menu != 0){
		cout << "ELEICOES 2026\n";
		cout << "ESCOLHA UMA DAS OPCOES:\n";
		cout << "[1] - Lula\n";
		cout << "[2] - Bolsonaro\n";
		cout << "[3] - Nulo\n";
		cout << "[4] - Branco\n";
		cout << "[0] - Sair\n";
		cin >> menu;
		switch (menu){
			case 1:
				candidato1 = candidato1 + 1;
				break;
			case 2:
				candidato2 = candidato2 + 1;
				break;
			case 3:
				nulos = nulos + 1;
				break;
			case 4:
				brancos = brancos + 1;
				break;
			case 0:
				total = candidato1 + candidato2 + nulos + brancos;
				cout << "Lula ============= " << (candidato1 / total) * 100 << "%\n";
				cout << "Bolsonaro ============== " << (candidato2 / total) * 100 << "%\n";
				cout << "Nulos =================== " << (nulos / total) * 100 << "%\n";
				cout << "Brancos ================= " << (brancos / total) * 100 << "%\n";
				cout << "////////////////////////////////////////\n ";
				cout << "Total de Votos ========== " << total << "\n";
				break;
			default:
				break;
       }
	}
	return 0;
}
