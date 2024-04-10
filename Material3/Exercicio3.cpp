/*Construir um programa para avaliar filmes, pedindo ao
usu�rio para avaliar diferentes aspectos como enredo, atua��o e
efeitos especiais. Calcule a m�dia das notas avaliadas em
enredo, atua��o e efeitos especiais. O programa deve permitir a
avalia��o de v�rios filmes. O programa deve parar quando
usu�rio n�o desejar mais continuar. */

#include <iostream>
#include <string>
#include <locale>

using namespace std;


struct Filme
   {
    string titulo;
    float enredo;
    float atuacao;
    float efeitosEspeciais;
   };

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Filme filme;

    char continuar;
    do
        {

        cout << "Digite o titulo do filme: ";
        getline(cin >> ws, filme.titulo);

        cout << "Avalie o enredo (0-10): ";
        cin >> filme.enredo;

        cout << "Avalie a atuacao (0-10): ";
        cin >> filme.atuacao;

        cout << "Avalie os efeitos especiais (0-10): ";
        cin >> filme.efeitosEspeciais;

        cout << "Deseja avaliar outro filme? (S/N): ";
        cin >> continuar;
        }

    while (continuar == 'S' || continuar == 's');


    float mediaEnredo = filme.enredo;
    float mediaAtuacao = filme.atuacao;
    float mediaEfeitosEspeciais = filme.efeitosEspeciais;


    cout << "\nM�dia das avalia��es:\n";
    cout << "Enredo: " << mediaEnredo << endl;
    cout << "Atuacao: " << mediaAtuacao << endl;
    cout << "Efeitos Especiais: " << mediaEfeitosEspeciais << endl;


}
