#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> VetorInteiros;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    VetorInteiros numeros(5);

    cout << "Digite os n�meros do vetor: " <<endl;
    for(int i = 0; i < 5; i++)
    {
        cin >> numeros[i];
    }

    cout << "N�meros: ";
    for(int num : numeros)
    {
        cout << num << " ";
    }
    cout << endl;
}
