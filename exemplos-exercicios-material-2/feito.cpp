#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Restaurante {
    string prato;
    int qtd;
    float preco;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    /*
    5 - Implementar um programa para registrar pedidos em um
    restaurante, coletando informações como o nome do prato,
    quantidade e preço total. O programa deve continuar recebendo
    novos pedidos até que um valor específico seja inserido como
    preço.
    */

    vector<Restaurante> restaurante;
    Restaurante pedido;

    int precoTotal = 0;
    cout << "Digite '-1' no preço para acabar o programa." << endl;

    do{
       cout << "Qual o prato? ";
       getline(cin, pedido.prato);
       cout << "Qual a quantidade? ";
       cin >> pedido.qtd;
       cin.ignore();
       cout << "Qual o preço? ";
       cin >> pedido.preco;
       cin.ignore();

       restaurante.push_back(pedido);

       if(pedido.preco == -1){break;}

    precoTotal += pedido.preco * pedido.qtd;

    cout << "Preço total até agora: " << precoTotal << endl << endl;

    }while(1 == 1);

    cout << "\nRegistro do pedido\n";

    for (const auto& r : restaurante) {
        cout << "Prato: " << r.prato << ", Quantidade: " << r.qtd << ", Preço: " << r.preco << endl;
    }

}
