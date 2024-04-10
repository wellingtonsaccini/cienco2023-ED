//Fa�a um programa em C++ para ler e armazenar em um vetor a temperatura
//m�dia de todos os dias do ano. Calcular e escrever:
//a) Menor temperatura do ano
//b) Maior temperatura do ano
//c) Temperatura m�dia anual
//d) O n�mero de dias no ano em que a temperatura foi inferior a m�dia anual

#include <iostream>
#include <locale>

using namespace std;
#define DIAS 5
int main()
{
    float temp[DIAS];
    float soma = 0;
    float menor , maior, media;
    int abaixo = 0;

    cout << "Digite a temperatura m�dia de cada dia do ano:" << endl;
    for (int i = 0; i < DIAS; ++i) {
        cout << "Dia " << i + 1 << ": ";
        cin >> temp[i];
        soma += temp[i];

        if (i == 0 || temp[i] < menor) {
            menor = temp[i];
        }

        if (i == 0 || temp[i] > maior) {
            maior = temp[i];
        }
    }

    media = soma / DIAS;

    for (int i = 0; i < DIAS; ++i) {
        if (temp[i] < media) {
            abaixo++;
        }
    }

    cout << "Menor temperatura do ano: " << menor << " oC" << endl;
    cout << "Maior temperatura do ano: " << maior << " oC" << endl;
    cout << "Temperatura media anual: " << media << " oC" << endl;
    cout << "Numero de dias no ano em que a temperatura foi inferior a media: " << abaixo << endl;
}
