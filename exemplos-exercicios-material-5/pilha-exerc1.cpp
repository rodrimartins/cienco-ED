
#include <iostream>
#include <stack>

using namespace std;

int main() {

    setlocale(LC_ALL, "portuguese");
    stack<int> pilha;
    int opcao;

    do {
        cout << "Escolha uma opção:\n";
        cout << "1. Inserir elemento\n";
        cout << "2. Remover elemento do topo\n";
        cout << "3. Verificar elemento do topo\n";
        cout << "4. Verificar se a pilha está vazia\n";
        cout << "5. Exibir tamanho da pilha\n";
        cout << "0. Sair\n";
        cout << "Opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                int elemento;
                cout << "Digite o elemento a ser inserido: ";
                cin >> elemento;
                pilha.push(elemento);
                cout << "Elemento " << elemento << " inserido na pilha.\n";
                break;
            }
            case 2: {
                if (!pilha.empty()) {
                    int elementoRemovido = pilha.top();
                    pilha.pop();
                    cout << "Elemento " << elementoRemovido << " removido da pilha.\n";
                } else {
                    cout << "A pilha está vazia. Nenhum elemento removido.\n";
                }
                break;
            }
            case 3: {
                if (!pilha.empty()) {
                    cout << "Elemento do topo da pilha: " << pilha.top() << endl;
                } else {
                    cout << "A pilha está vazia. Nenhum elemento no topo.\n";
                }
                break;
            }
            case 4: {

                if(pilha.empty()){
                   cout << "A pilha está vazia.\n";
                }
                else{
                    cout << "A pilha não está vazia.\n";
                }

                break;
            }
            case 5: {
                cout << "Tamanho da pilha: " << pilha.size() << endl;
                break;
            }
            case 0: {
                cout << "Encerrando o programa.\n";
                break;
            }
            default: {
                cout << endl;
                cout << "Opção inválida. Tente novamente.\n";
                cout << endl;
                continue;
            }
        }

        cout << endl;
    } while (opcao != 0);

    return 0;
}
