/* Desenvolva uma funçao que calcula o percentual de reajuste de um salario tendo como parametro
*/
#include <iostream>

using namespace std;

float percentualValor(float salAntigo, float salNovo);

int main()
{

float salNovo = 2000.00;
float salAntigo = 1500.00;

 cout << percentualValor(salAntigo, salNovo);


}


float percentualValor(float salAntigo, float salNovo)

{
    return ((salNovo / salAntigo)-1);


}

