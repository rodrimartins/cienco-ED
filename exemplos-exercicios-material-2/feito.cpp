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
    restaurante, coletando informa��es como o nome do prato,
    quantidade e pre�o total. O programa deve continuar recebendo
    novos pedidos at� que um valor espec�fico seja inserido como
    pre�o.
    */

    vector<Restaurante> restaurante;
    Restaurante pedido;

    int precoTotal = 0;
    cout << "Digite '-1' no pre�o para acabar o programa." << endl;

    do{
       cout << "Qual o prato? ";
       getline(cin, pedido.prato);
       cout << "Qual a quantidade? ";
       cin >> pedido.qtd;
       cin.ignore();
       cout << "Qual o pre�o? ";
       cin >> pedido.preco;
       cin.ignore();

       restaurante.push_back(pedido);

       if(pedido.preco == -1){break;}

    precoTotal += pedido.preco * pedido.qtd;

    cout << "Pre�o total at� agora: " << precoTotal << endl << endl;

    }while(1 == 1);

    cout << "\nRegistro do pedido\n";

    for (const auto& r : restaurante) {
        cout << "Prato: " << r.prato << ", Quantidade: " << r.qtd << ", Pre�o: " << r.preco << endl;
    }

}
