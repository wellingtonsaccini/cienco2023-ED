#include <iostream>

using namespace std;

int main()
{
    //declaracao da variavel x
    int x = 5;

    //declaraçao de um ponteiro para X
    int *ptrParaX;

    //atribuir o endereço de x para ponteiro de X

    ptrParaX = &x;

    cout << " Valor de X: " << x << endl;
    cout << " Endereco de X: " << ptrParaX << endl;
    cout << " Valor Armazenado no Endereco:" << *ptrParaX << endl;

    *ptrParaX = 99;

    cout << x << endl;

}
