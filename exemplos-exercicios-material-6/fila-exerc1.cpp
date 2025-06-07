#include <iostream>
#include <queue>

using namespace std;

int main() {

    setlocale(LC_ALL, "portuguese");
    queue<string> filaAtendimento;
    int opcao;
    string nomeCliente;

    cout << "Bem-vindo ao sistema de atendimento da loja!\n";

    do {
        cout << "\nOpções disponíveis:\n";
        cout << "1. Inserir cliente na fila\n";
        cout << "2. Atender próximo cliente\n";
        cout << "3. Exibir fila de espera\n";
        cout << "4. Encerrar o programa\n";
        cout << "\nDigite a opção desejada: ";
        cin >> opcao;

        cin.ignore();

        switch (opcao) {
            case 1:
                cout << "Digite o nome do cliente: ";
                getline(cin, nomeCliente);
                filaAtendimento.push(nomeCliente);
                cout << "Cliente " << nomeCliente << " foi adicionado à fila de espera\n";
                break;
            case 2:
                if (!filaAtendimento.empty()) {
                    cout << "Atendendo o cliente: " << filaAtendimento.front() << endl;
                    filaAtendimento.pop();
                } else {
                    cout << "Não há clientes na fila de espera\n";
                }
                break;
            case 3:
                if (!filaAtendimento.empty()) {
                    cout << "Fila de espera: ";
                    queue<string> filaAuxiliar = filaAtendimento;
                    while (!filaAuxiliar.empty()) {
                        cout << filaAuxiliar.front() << " ";
                        filaAuxiliar.pop();
                    }
                    cout << endl;
                } else {
                    cout << "A fila de espera está vazia\n";
                }
                break;
            case 4:
                cout << "Encerrando o programa...\n";
                break;
            default:
                cout << "Opção inválida. Digite novamente\n";
                break;
        }
    } while (opcao != 4);

    return 0;
}
