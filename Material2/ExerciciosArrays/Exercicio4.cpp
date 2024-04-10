#include <iostream>

using namespace std;

int main() {
    const int TAMANHO_VETOR = 20;
    int vetor[TAMANHO_VETOR];

    cout << "Digite os 20 numeros:" << endl;
    for (int i = 0; i < TAMANHO_VETOR; ++i) {
        cout << "Numero " << i+1 << ": ";
        cin >> vetor[i];
    }

    cout << "Numeros na ordem inversa:" << endl;
    for (int i = TAMANHO_VETOR - 1; i >= 0; --i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
