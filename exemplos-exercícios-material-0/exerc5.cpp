#include <iostream>

using namespace std;

int main()
{
	float pe, desconto, acrescimo;
	int cp, menu;
	cout << "INFORME O PRECO DA ETIQUETA:\n";
	cin >> pe;
	cout << "--------------------------------------------------------\n";
	cout << "INFORME A CONDICAO DE PAGAMENTO:\n";
	cout << "[1] - A VISTA EM DINHEIRO OU CHEQUE, COM 10% DE DESCONTO\n";
	cout << "[2] - A VISTA COM CARTAO DE CREDITO, COM 5% DE DESCONTO\n";
	cout << "[3] - EM 2 VEZES, PRECO NORMAL DE ETIQUETA SEM JUROS\n";
	cout << "[4] - EM 3 VEZES, PRECO DE ETIQUETA COM ACRESCIMO DE 10%\n";
	cout << "[0] - SAIR\n";
	cout << "--------------------------------------------------------\n";
	cin >> menu;
	while (menu != 0){
		switch(menu){
			case 1:
				desconto = (pe * 10) / 100;
				cout << "DESCONTO DE 10% =================================== " << desconto << "\n";
				cout << "VALOR COM DESCONTO ================================ " << pe - desconto << "\n";
				menu = 0;
			break;
			case 2:
				desconto = (pe * 5) / 100;
				cout << "DESCONTO DE 5% ======================================== " << desconto << "\n";
				cout << "VALOR COM DESCONTO ==================================== " << pe - desconto << "\n";
				menu = 0;
				break;
			case 3:
				cout << "EM 2 VEZES, PRECO NORMAL DE ETIQUETA SEM JUROS ======== " << pe << "\n";
				cout << "VALOR DAS PARCELAS ==================================== " << pe / 2 << endl;
 				menu = 0;
				break;
			case 4:
				acrescimo = (pe * 10) / 100;
				cout << "EM 3 VEZES, PRECO DE ETIQUETA COM ACRESCIMO DE 10% ==== " << pe + acrescimo << "\n";
				cout << "VALOR DAS PARCELAS ==================================== " << (pe + acrescimo) / 3 << endl;
				menu = 0;
				break;
			default:
			    cout << "CODIGO INVALIDO";
				menu = 0;
				break;
		}
	}
	return 0;
}
