/*Desenvolver um programa que registre detalhes de livros em
uma biblioteca, como t�tulo, autor e ano de publica��o. O
programa deve continuar solicitando informa��es at� que um
t�tulo de livro espec�fico seja inserido */

#include <iostream>
#include <locale>

using namespace std;

struct Livro{
    string titulo;
    string autor;
    int ano;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Livro l;

    cout << "Entre com o t�tulo do livro: " << endl;
    getline(cin, l.titulo);


    while(l.titulo != "fim"){

        cout << "Entre com o nome do autor: " << endl;
        getline(cin, l.autor);

        cout << "Entre com o ano de publica��o: " << endl;
        cin >> l.ano;

        cout << "\n\n -------------- " << endl;
        cout << "Livro: " << l.titulo << endl;
        cout << "Autor: " << l.autor << endl;
        cout << "Ano de Publica��o: " << l.ano << endl;
        cout << " -------------- \n\n" << endl;

        cin.ignore();

        cout << endl << endl;

        cout << "Entre com o t�tulo do livro: " << endl;
        getline(cin, l.titulo);


    };

}
