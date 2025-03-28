#include <iostream>

using namespace std;

int main()
{
    float numHoras, salMin, salReceber;
    float horaTrab, salBruto, imposto;

    cout << "Digite o número de horas trabalhadas: " << endl;
    cin >> numHoras;
    cout << "Digite o valor do salário mínimo: " << endl;
    cin >> salMin;

    horaTrab = salMin / 2;
    salBruto = numHoras * horaTrab;
    imposto = salBruto * 3/100;
    salReceber = salBruto - imposto;

    cout << "Salário Bruto: " << salBruto << endl;
    cout << "Salário a receber: " << salReceber << endl;

    return 0;
}
