#include <iostream>
#include <stack>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    stack <int> pilha;
    int n = 1;

    while(n != 0){
        cout << "Digite um n�mero inteiro positivo ou (digite 0 para finalizar): ";
        cin >> n;

        if(n != 0){
            pilha.push(n);
        }
    }

     cout << "N�meros na ordem inversa: " << endl;

    while(!pilha.empty()){
        cout << pilha.top();
        pilha.pop();
        cout << " ";
    }

    cout << endl;
}
