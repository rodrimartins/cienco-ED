#include <iostream>

using namespace std;

// Defini��o da estrutura do n� da lista encadeada
struct No {
    int dado;           // Dado do n�
    No* proximo;      // Ponteiro para o pr�ximo n�
};

// Fun��o para criar um novo n� com o dado fornecido
No* criarNo(int dado) {
    No* novoNo = new No;
    novoNo->dado = dado;
    novoNo->proximo = nullptr;
    return novoNo;
}

// Fun��o para inserir um novo n� no in�cio da lista
void inserirNoInicio(No** cabeca, int dado) {
    // Cria um novo n�
    No* novoNo = criarNo(dado);

    // Define o pr�ximo do novo n� como o n� atual no in�cio da lista
    novoNo->proximo = *cabeca;

    // Atualiza o ponteiro para o novo n� como o novo n� no in�cio da lista
    *cabeca = novoNo;
}

// Fun��o para remover um n� com o dado fornecido da lista
void removerNo(No** cabeca, int dado) {
    // Verifica se a lista est� vazia
    if (*cabeca == nullptr) {
        cout << "Lista vazia. Nenhum no removido." << endl;
        return;
    }

    // Verifica se o primeiro n� cont�m o dado a ser removido
    if ((*cabeca)->dado == dado) {
        No* temp = *cabeca;
        *cabeca = (*cabeca)->proximo;
        delete temp;
        cout << "No removido." << endl;
        return;
    }

    // Procura o n� a ser removido na lista
    No* anterior = *cabeca;
    No* atual = (*cabeca)->proximo;
    while (atual != nullptr && atual->dado != dado) {
        anterior = atual;
        atual = atual->proximo;
    }

    // Se o n� foi encontrado, remove-o da lista
    if (atual != nullptr) {
        anterior->proximo = atual->proximo;
        delete atual;
        cout << "No removido." << endl;
    } else {
        cout << "No nao encontrado na lista." << endl;
    }
}

// Fun��o para imprimir os elementos da lista
void imprimirLista(No* cabeca) {
    cout << "Elementos da lista: ";
    while (cabeca != nullptr) {
        cout << cabeca->dado << " ";
        cabeca = cabeca->proximo;
    }
    cout << endl;
}

// Fun��o principal
int main() {
    No* cabeca = nullptr;     // Ponteiro para o primeiro n� da lista

    // Inser��o de elementos na lista
    inserirNoInicio(&cabeca, 10);
    inserirNoInicio(&cabeca, 20);
    inserirNoInicio(&cabeca, 30);

    // Imprime os elementos da lista
    imprimirLista(cabeca);

    // Remove um n� da lista
    removerNo(&cabeca, 20);

    // Imprime os elementos atualizados da lista
    imprimirLista(cabeca);

    return 0;
}


