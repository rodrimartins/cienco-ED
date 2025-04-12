#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Pedido {
    string nomePrato;
    int quantidade;
    float precoTotal;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    vector<Pedido> pedidos;
    Pedido pedidoAtual;
    float precoParada = 0.0; // Valor específico para encerrar o registro de pedidos

    cout << "Programa de Registro de Pedidos do Restaurante" << endl;
    cout << "Insira 0 no preço total para finalizar o registro de pedidos." << endl;

    do {
        cout << "Digite o nome do prato: ";
        getline(cin, pedidoAtual.nomePrato);
        cout << "Digite a quantidade do prato: ";
        cin >> pedidoAtual.quantidade;
        cout << "Digite o preço total do pedido: ";
        cin >> pedidoAtual.precoTotal;
        cin.ignore(); // Limpa o buffer de entrada após a leitura de um valor numérico

        // Verifica se o preço total é diferente do valor de parada
        if (pedidoAtual.precoTotal != precoParada) {
            pedidos.push_back(pedidoAtual); // Adiciona o pedido atual ao vetor de pedidos
        }

    } while (pedidoAtual.precoTotal != precoParada); // Continua até que o valor de parada seja inserido

    cout << "\nRegistro de Pedidos:" << endl;
    for (const auto& pedido : pedidos) {
        cout << "Prato: " << pedido.nomePrato
         << ", Quantidade: " << pedido.quantidade
         << ", Preço Total: R$" << pedido.precoTotal << endl;
    }

    return 0;
}
