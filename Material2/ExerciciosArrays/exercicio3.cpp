#include <iostream>

using namespace std;

int main() {
    const int TAMANHO_VETOR = 10;
    int vetorA[TAMANHO_VETOR];
    int vetorM[TAMANHO_VETOR];
    int numeroX;

    cout << "Digite os " << TAMANHO_VETOR << " números do vetor A:" << endl;
    for (int i = 0; i < TAMANHO_VETOR; ++i) {
        cout << "Elemento " << i+1 << ": ";
        cin >> vetorA[i];
    }

    cout << "Digite um número para ser multiplicado pelos elementos de A: ";
    cin >> numeroX;

    for (int i = 0; i < TAMANHO_VETOR; ++i) {
        vetorM[i] = vetorA[i] * numeroX;
    }

    cout << "Vetor M (resultante da multiplicação de A por " << numeroX << "):" << endl;
    for (int i = 0; i < TAMANHO_VETOR; ++i) {
        cout << vetorM[i] << " ";
    }
    cout << endl;

    return 0;
}
