#include <iostream>
#include <queue>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    queue <string> fila;
    int n;
    string cliente;
    do{
        cout << endl << "Escolha uma op��o abaixo: \n"
            "1 - Inserir cliente na fila\n"
            "2 - Atender pr�ximo cliente \n"
            "3 - Exibir fila de espera \n"
            "4 - Encerrar o programa \n"
            "Op��o: ";
        cin >> n;
        cin.ignore();

        switch(n){
        case 1:
            cout << "Digite o nome do cliente: " << endl;
            getline(cin, cliente);
            fila.push(cliente);
            cout << "Cliente " << fila.back() << " adicionado � fila de espera" << endl;
            break;
        case 2:
            if(fila.empty()){cout << "FILA VAZIA" << endl;}else{
                cout << "Cliente que est� sendo atendido: " << fila.front() << endl;
                fila.pop();}
            break;
        case 3:
            if(fila.empty()){cout << "FILA VAZIA" << endl;}{
                if(!fila.empty()){
                    queue <string> filaAuxiliar = fila;
                    while(!filaAuxiliar.empty()){
                    cout << "Fila de espera: " << filaAuxiliar.front() << endl;
                    filaAuxiliar.pop();
                    }
                }
            }
            break;
        case 4:
            cout << "Encerrando o programa." << endl;
            break;
        default:
            cout << "Op��o inv�lida" << endl;
        }
    }while(n != 4);
}
