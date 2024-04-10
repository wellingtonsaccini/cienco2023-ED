#include <iostream>

using namespace std;

typedef enum {VERMELHO, VERDE, AZUL} Cores;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int numcor;

    cout << "Digite o n�mero: " <<endl;
    cout << "1 - Vermelho, 2 - Verde, 3 - Azul" <<endl;
    cin >> numcor;

    Cores novacor;

    if(numcor >= 1 && numcor <= 3)
    {
        novacor = static_cast<Cores>(numcor - 1);
    }
    else
    {
        cout << "N�mero de cor inv�lido" <<endl;
        return 1;
    }

    cout << "A cor � ";
    switch (novacor){
        case VERMELHO: cout << "Vermelho"; break;
        case VERDE: cout << "Verde"; break;
        case AZUL: cout << "Azul"; break;
    }
}
