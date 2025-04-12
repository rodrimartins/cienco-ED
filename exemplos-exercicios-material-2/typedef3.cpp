#include <iostream>
using namespace std;

typedef enum {SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO, DOMINGO} DiaDaSemana;  // Apelido para uma enumeração
//enum começa em 0

int main() {
    setlocale(LC_ALL, "Portuguese");

    int dia;

    cout << "Digite o número do dia da semana (1 a 7): ";
    cin >> dia;

    DiaDaSemana hoje;
    if (dia >= 1 && dia <= 7) {
        hoje = static_cast<DiaDaSemana>(dia - 1);
        //static_cast é usado para converter esse valor para o tipo DiaDaSemana.
        //A conversão é necessária porque DiaDaSemana é uma enumeração que começa com 0
    } else {
        cout << "Número de dia inválido!" << endl;
        return 1;
    }

    cout << "Hoje é ";
    switch (hoje) {
        case SEGUNDA: cout << "segunda-feira."; break;
        case TERCA: cout << "terça-feira."; break;
        case QUARTA: cout << "quarta-feira."; break;
        case QUINTA: cout << "quinta-feira."; break;
        case SEXTA: cout << "sexta-feira."; break;
        case SABADO: cout << "sábado."; break;
        case DOMINGO: cout << "domingo."; break;
    }
    cout << endl;

    return 0;
}

