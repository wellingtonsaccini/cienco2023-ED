#include <iostream>
#include <string>

using namespace std;

int main() {
    const int MAX_NAMES = 10;
    string nomes[MAX_NAMES];


    cout << "Digite os nomes das 10 pessoas:" << endl;
    for (int i = 0; i < MAX_NAMES; ++i) {
        cout << "Nome " << i+1 << ": ";
        cin >> (nomes[i]);
    }


    string nomeAdicional;
    cout << "Digite um nome qualquer de pessoa: ";
    cin >> nomeAdicional;


    bool encontrado = false;
    for (int i = 0; i < MAX_NAMES; ++i) {
        if (nomes[i] == nomeAdicional) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "ACHEI" << endl;
    } else {
        cout << " NAO ACHEI" << endl;
    }

    return 0;
}
