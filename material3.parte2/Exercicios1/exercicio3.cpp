#include <iostream>
#include <string>
using namespace std;

typedef struct {
    string rua;
    string cidade;
    int CEP;
} TipoEndereco;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    TipoEndereco endereco;

    cout << "Digite o nome da rua: ";
    getline(cin, endereco.rua);

    cout << "Digite o nome da cidade: ";
    getline(cin, endereco.cidade);

    cout << "Digite o CEP: ";
    cin >> endereco.CEP;

    cout << "Nome da rua: " << endereco.rua << ", Cidade: " << endereco.cidade << ", CEP: " << endereco.CEP;

}
