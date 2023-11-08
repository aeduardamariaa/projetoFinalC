#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "../Headers/dificil.h"
#include "../Headers/dificil.c"

int main(void)
{
    Personagem bolinha;
    bolinha.x = 0;
    bolinha.y = 1;

    while (1)
    {

        mostrarLabirinto(matriz, bolinha);

        int input;

        input = getch();


        if (kbhit() == 0)
        {

        if (ganhar(matriz, bolinha) == 3)
        {
            printf("Ganhouuuuuuuuuuuuu!");
            break;
        }
        else
        {
            andar(matriz, &bolinha, input);
        }
        system("cls");
        }
    }
}