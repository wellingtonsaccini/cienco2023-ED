#include <iostream>

using namespace std;
int calcularProdutoReferencia(int *valorUm, int *valorDois);



int main()
{
    int valorUm = 10;
    int valorDois = 20;
    cout << calcularProdutoReferencia(&valorUm, &valorDois);
}

int calcularProdutoReferencia(int *valorUm, int *valorDois)
{
    return *valorUm * *valorDois;
}
