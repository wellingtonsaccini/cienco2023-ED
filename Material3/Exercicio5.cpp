/*Implementar um programa para registrar pedidos em um
restaurante, coletando informações como o nome do prato,
quantidade e preço total. O programa deve continuar recebendo
novos pedidos até que um valor específico seja inserido como
preço */


#include <iostream>
#include <vector>
#include <string>
#include <locale>

using namespace std;


struct Pedido
{
    string nomePrato;
    int quantidade;
    float precoTotal;
};

int main()
{
    setlocale(LC_ALL, "portuguese");
    vector<Pedido> pedidos;

    float precoEncerramento;


    cout << "Digite o preco para encerrar os pedidos: ";
    cin >> precoEncerramento;


    char continuar;
    do
    {
        Pedido novoPedido;
        cout << "\nDigite o nome do prato: ";
        cin >> novoPedido.nomePrato;

        cout << "Digite a quantidade: ";
        cin >> novoPedido.quantidade;

        cout << "Digite o preco total: ";
        cin >> novoPedido.precoTotal;

        pedidos.push_back(novoPedido);


        cout << "Deseja fazer outro pedido? (S/N): ";
        cin >> continuar;
    }
    while (continuar == 'S' || continuar == 's');


    cout << "\nDetalhes dos Pedidos:\n";
    for (size_t i = 0; i < pedidos.size(); i++)
    {
        cout << "Pedido " << i + 1 << ":\n";
        cout << "Nome do prato: " << pedidos[i].nomePrato << endl;
        cout << "Quantidade: " << pedidos[i].quantidade << endl;
        cout << "Preco total: " << pedidos[i].precoTotal << endl << endl;
    }


}
