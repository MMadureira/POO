#include <iostream>
#include <stdio.h>

class Divisao
{
    int numerador, denominador, quociente;
    public:
        int get_numerador()
        {
            return numerador;
        };

        void set_numerador(int num)
        {
            numerador = num;
        };

        int get_denominador()
        {
            return denominador;
        };

        void set_denominador(int den)
        {
            denominador = den;
        };

        int get_quociente()
        {
            return quociente;
        };

        void set_quociente(int numerador, int denominador)
        {
            if (denominador != 0)
            {
                quociente = numerador / denominador;
            };
        };

};

int main()
{
    Divisao d;
    int n, dn;
    n = 100;
    dn = 5;
    d.set_quociente(n, dn);
    d.set_numerador(n);
    d.set_denominador(dn);
    printf("%d\n", d.get_numerador());
    printf("%d\n", d.get_denominador());
    printf("%d\n", d.get_quociente());
}