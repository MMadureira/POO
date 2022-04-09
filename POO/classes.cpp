#include <iostream>
#include <stdio.h>
//#include <stdlib.h>

class Humano
{
    int altura;

    public:
        int get_altura()
        {
            return altura;
        };

        void set_altura(int alt)
        {
            if (alt >= 40 && alt <= 220)
            altura = alt; 
        };
};

int main()
{
    Humano h;
    h.set_altura(-4);
    printf("%d", h.get_altura());
};
