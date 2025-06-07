#include <iostream>

using namespace std;

// Definição da estrutura do nó da lista circular
struct Node {
    int dado;      // Dado do nó
    Node* proximo; // Ponteiro para o próximo nó
};

// Função para criar um novo nó com o dado fornecido
Node* criarNo(int dado) {
    Node* novoNo = new Node;
    novoNo->dado = dado;
    novoNo->proximo = nullptr;
    return novoNo;
}

// Função para inserir um novo nó no início da lista circular
void inserirNoInicio(Node** cabeca, int dado) {
    // Cria um novo nó
    Node* novoNo = criarNo(dado);

    if (*cabeca == nullptr) {
        // Se a lista estiver vazia, o novo nó será o início e o fim da lista
        *cabeca = novoNo;
        novoNo->proximo = novoNo; // Aponta o próximo nó para ele mesmo
    } else {
        // Se a lista não estiver vazia, insere o novo nó no início e atualiza os ponteiros
        novoNo->proximo = *cabeca;
        Node* atual = *cabeca;
        while (atual->proximo != *cabeca) {
            atual = atual->proximo;
        }
        atual->proximo = novoNo;
        *cabeca = novoNo;
    }
}

// Função para remover o nó do início da lista circular
void removerNoInicio(Node** cabeca) {
    if (*cabeca == nullptr) {
        // Verifica se a lista está vazia
        cout << "Lista vazia. Nenhum no removido." << endl;
    } else if ((*cabeca)->proximo == *cabeca) {
        // Verifica se há apenas um nó na lista
        delete *cabeca;
        *cabeca = nullptr;
        cout << "No removido. Lista vazia." << endl;
    } else {
        // Remove o nó do início e atualiza os ponteiros
        Node* atual = *cabeca;
        while (atual->proximo != *cabeca) {
            atual = atual->proximo;
        }
        atual->proximo = (*cabeca)->proximo;
        Node* temp = *cabeca;
        *cabeca = (*cabeca)->proximo;
        delete temp;
        cout << "No removido." << endl;
    }
}

// Função para imprimir os elementos da lista circular
void imprimirLista(Node* cabeca) {
    if (cabeca == nullptr) {
        cout << "Lista vazia." << endl;
        return;
    }

    cout << "Elementos da lista: ";
    Node* atual = cabeca;
    do {
        cout << atual->dado << " ";
        atual = atual->proximo;
    } while (atual != cabeca);
    cout << endl;
}

// Função principal
int main() {
    Node* cabeca = nullptr; // Ponteiro para o início da lista circular

    // Inserindo alguns nós no início da lista circular
    inserirNoInicio(&cabeca, 3);
    inserirNoInicio(&cabeca, 5);
    inserirNoInicio(&cabeca, 7);

    // Imprimindo os elementos da lista circular
    imprimirLista(cabeca);

    // Removendo um nó do início da lista circular
    removerNoInicio(&cabeca);

    // Imprimindo os elementos da lista circular após a remoção
    imprimirLista(cabeca);

    return 0;
}

