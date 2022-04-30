#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main () {

// obtém um valor do usuário e escrever se é positivo, negativo ou zero.

//Variavel 

int A, B, C;

cout << "Digite o um valor: ";
cin >> A;

if (A > 0)
{
    cout << "Valor positivo. ";
}
else if (A < 0 )
{
    cout << "Valor Negativo. ";
}
else 
{
    cout << "Zero. ";
}
return 0;
}