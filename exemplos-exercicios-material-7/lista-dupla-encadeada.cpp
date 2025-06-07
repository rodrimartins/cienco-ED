#include <iostream>

using namespace std;

// Definição da estrutura do nó da lista duplamente encadeada
struct Node {
    int dado;       // Dado do nó
    Node* anterior; // Ponteiro para o nó anterior
    Node* proximo;  // Ponteiro para o próximo nó
};

// Função para criar um novo nó com o dado fornecido
Node* criarNo(int dado) {
    Node* novoNo = new Node;
    novoNo->dado = dado;
    novoNo->anterior = nullptr;
    novoNo->proximo = nullptr;
    return novoNo;
}

// Função para inserir um novo nó no início da lista
void inserirNoInicio(Node** cabeca, int dado) {
    // Cria um novo nó
    Node* novoNo = criarNo(dado);

    // Atualiza os ponteiros do novo nó e do nó atual no início da lista
    novoNo->proximo = *cabeca;
    if (*cabeca != nullptr) {
        (*cabeca)->anterior = novoNo;
    }

    // Atualiza o ponteiro para o novo nó como o novo nó no início da lista
    *cabeca = novoNo;
}

// Função para remover um nó com o dado fornecido da lista
void removerNo(Node** cabeca, int dado) {
    // Verifica se a lista está vazia
    if (*cabeca == nullptr) {
        cout << "Lista vazia. Nenhum no removido." << endl;
        return;
    }

    // Verifica se o primeiro nó contém o dado a ser removido
    if ((*cabeca)->dado == dado) {
        Node* temp = *cabeca;
        *cabeca = (*cabeca)->proximo;
        if (*cabeca != nullptr) {
            (*cabeca)->anterior = nullptr;
        }
        delete temp;
        cout << "No removido." << endl;
        return;
    }

    // Procura o nó a ser removido na lista
    Node* atual = *cabeca;
    while (atual != nullptr && atual->dado != dado) {
        atual = atual->proximo;
    }

    // Se o nó foi encontrado, remove-o da lista
    if (atual != nullptr) {
        if (atual->anterior != nullptr) {
            atual->anterior->proximo = atual->proximo;
        }
        if (atual->proximo != nullptr) {
            atual->proximo->anterior = atual->anterior;
        }
        delete atual;
        cout << "No removido." << endl;
    } else {
        cout << "No nao encontrado na lista." << endl;
    }
}

// Função para imprimir os elementos da lista
void imprimirLista(Node* cabeca) {
    cout << "Elementos da lista: ";
    while (cabeca != nullptr) {
        cout << cabeca->dado << " ";
        cabeca = cabeca->proximo;
    }
    cout << endl;
}

// Função principal
int main() {
    Node* cabeca = nullptr; // Ponteiro para o início da lista

    // Inserindo alguns nós no início da lista
    inserirNoInicio(&cabeca, 3);
    inserirNoInicio(&cabeca, 5);
    inserirNoInicio(&cabeca, 7);

    // Imprimindo os elementos da lista
    imprimirLista(cabeca);

    // Removendo um nó da lista
    removerNo(&cabeca,55);

    // Imprimindo os elementos da lista após a remoção
    imprimirLista(cabeca);

    return 0;
}


