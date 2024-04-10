#include <iostream>

using namespace std;

int calcularProduto(int valorUm, int valorDois);

int main()
{
    int valorUm = 10;
    int valorDois = 20;

    //int resultado;

   cout << calcularProduto(valorUm, valorDois);

   //cout << resultado;
}

int calcularProduto(int valorUm, int valorDois)
{
    return valorUm * valorDois;
}
