#include <iostream>

//2. Suponha que voc� est� desenvolvendo um programa para armazenar
//informa��es sobre animais em um zool�gico. Crie uma estrutura chamada
//Animal que deve armazenar as seguintes informa��es sobre cada animal:
//� Nome do animal (string)
//� Esp�cie do animal (string)
//� Idade do animal (int)
//� Peso do animal em kg (float)
//Em seguida, crie um typedef para uma lista de animais chamada ListaAnimais,
//que deve ser um vetor de 10 elementos do tipo Animal.
//Por fim, crie um programa que pede ao usu�rio para digitar os dados de 10
//animais e armazena esses dados em uma vari�vel do tipo ListaAnimais.
//Ao final, o programa deve exibir os dados de cada um dos 10 animais na tela.


using namespace std;
#define TAMANHO 10

typedef struct bicho
{
        string animal;
        string especie;
        float peso;
        int idade;

} Bicho;

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    Bicho dados;
    Bicho vet[TAMANHO];

    for (int i = 0; i < TAMANHO; i++)
    {



    cout << "Informe o nome do animal: " << endl;
    getline(cin, vet[i].animal);

    cout << "Informe a especie do animal: " << endl;
    getline(cin, vet[i].especie);

    cout << "Informe o peso: " << endl;
    cin >> vet[i].peso;

    cout << "Informe  a idade do animal: " << endl;
    cin >> vet[i].idade;

    cin.ignore();
    }

        for(int i = 0; i < TAMANHO;i++)
            {
                cout << vet[i].animal << " " << endl;
                cout << "===========================" << endl;
                cout << vet[i].especie << " " << endl;
                cout << "===========================" << endl;
                cout << vet[i].peso << " " << endl;
                cout << "===========================" << endl;
                cout << vet[i].idade << " " << endl;
                cout << "===========================" << endl;
                cout << "===========================" << endl;
            }
}


