#include <iostream>

//Crie uma estrutura chamada pessoa que seja capaz de
//armazenar o nome, o endere�o, o CPF e a idade de 5
//pessoas.


using namespace std;
#define TAMANHO 5

typedef struct pessoa
{
        string nome;
        string endereco;
        int cpf;
        int idade;

} Pessoa;

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    pessoa dados;
    Pessoa vet[TAMANHO];

    for (int i = 0; i < TAMANHO; i++)
    {



    cout << "Informe o nome da pessoa: " << endl;
    getline(cin, vet[i].nome);

    cout << "Informe o endere�o da pessoa: " << endl;
    getline(cin, vet[i].endereco);

    cout << "Informe o CPF da pessoa: " << endl;
    cin >> vet[i].cpf;

    cout << "Informe  a idade da pessoa: " << endl;
    cin >> vet[i].idade;

    cin.ignore();
    }

        for(int i = 0; i < TAMANHO;i++)
            {
                cout << vet[i].nome << " " << endl;
                cout << "===========================" << endl;
                cout << vet[i].endereco << " " << endl;
                cout << "===========================" << endl;
                cout << vet[i].cpf << " " << endl;
                cout << "===========================" << endl;
                cout << vet[i].idade << " " << endl;
                cout << "===========================" << endl;
                cout << "===========================" << endl;
            }
}
