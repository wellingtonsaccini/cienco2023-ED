#include <iostream>

using namespace std;

int main() {
    const int NUM_ALUNOS = 20;
    float notas[NUM_ALUNOS];
    float somaNotas = 0;


    cout << "Digite as notas dos " << NUM_ALUNOS << " alunos:" << endl;
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        cout << "Nota do aluno " << i+1 << ": ";
        cin >> notas[i];
        somaNotas += notas[i];
    }

    float mediaTurma = somaNotas / NUM_ALUNOS;

    int alunosAcimaDaMedia = 0;
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        if (notas[i] > mediaTurma) {
            alunosAcimaDaMedia++;
        }
    }

    cout << "Media da turma: " << mediaTurma << endl;
    cout << "Alunos com nota acima da media: " << alunosAcimaDaMedia << endl;

    return 0;
}
