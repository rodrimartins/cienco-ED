#include <iostream>
using namespace std;

typedef enum {SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO, DOMINGO} DiaDaSemana;  // Apelido para uma enumera��o
//enum come�a em 0

int main() {
    setlocale(LC_ALL, "Portuguese");

    int dia;

    cout << "Digite o n�mero do dia da semana (1 a 7): ";
    cin >> dia;

    DiaDaSemana hoje;
    if (dia >= 1 && dia <= 7) {
        hoje = static_cast<DiaDaSemana>(dia - 1);
        //static_cast � usado para converter esse valor para o tipo DiaDaSemana.
        //A convers�o � necess�ria porque DiaDaSemana � uma enumera��o que come�a com 0
    } else {
        cout << "N�mero de dia inv�lido!" << endl;
        return 1;
    }

    cout << "Hoje � ";
    switch (hoje) {
        case SEGUNDA: cout << "segunda-feira."; break;
        case TERCA: cout << "ter�a-feira."; break;
        case QUARTA: cout << "quarta-feira."; break;
        case QUINTA: cout << "quinta-feira."; break;
        case SEXTA: cout << "sexta-feira."; break;
        case SABADO: cout << "s�bado."; break;
        case DOMINGO: cout << "domingo."; break;
    }
    cout << endl;

    return 0;
}

