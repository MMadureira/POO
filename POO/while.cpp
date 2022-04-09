#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int contador = 0;
    while (contador < 100)
    {
        contador ++;
        cout << "\nContador = " << contador;
    }
    cout << "\n\nValor final: Contador = " << contador;
}