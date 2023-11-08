#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "../Headers/facil.h"

#define LINHA1 10
#define COLUNA1 10

int matriz1[LINHA1][COLUNA1] = {
{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
{1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
{1, 0, 1, 0, 1, 1, 0, 1, 0, 1},
{2, 0, 1, 0, 0, 0, 0, 1, 0, 1},
{1, 1, 1, 0, 1, 1, 1, 1, 1, 1},
{1, 0, 0, 0, 0, 0, 1, 0, 0, 3},
{1, 1, 1, 0, 1, 0, 0, 0, 1, 1},
{1, 0, 0, 0, 1, 1, 1, 0, 1, 1},
{1, 0, 1, 0, 0, 1, 0, 0, 0, 1},
{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},

};

void mostrarLabirinto1(int matriz1[LINHA1][COLUNA1], Personagem bolinha)
{
    int lab = 176;
    int quadrado = 219;

    for (int i = 0; i < LINHA1; i++)
    {
        for (int j = 0; j < COLUNA1; j++)
        {
            if (j == bolinha.y && i == bolinha.x)
            {
                printf("**");
            }
            else if (matriz1[i][j] == 1)
            {
                printf("%c%c", lab, lab);
            }
            else if (matriz1[i][j] == 0)
            {
                printf("  ");
            }
            else if (matriz1[i][j] == 2)
            {
                printf("  ");
            }
            else if (matriz1[i][j] == 3)
            {
                printf("%c%c", quadrado, quadrado);
            }
        }
        printf("\n");
    }
}

int verificarParedes1(int matriz1[LINHA1][COLUNA1], Personagem bolinha, int input1)
{
    if (input1 == 87 || input1 == 119) //W
    {
        if (matriz1[bolinha.x -1][bolinha.y] == 1)
        {
            return 1;
        }

    }
    else if (input1 == 68 || input1 == 100) // D
    {
        if (matriz1[bolinha.x][bolinha.y + 1] == 1)
        {
            return 1;
        }

    }
    else if (input1 == 83 || input1 == 115) // S
    {
        if (matriz1[bolinha.x + 1][bolinha.y] == 1)
        {
            return 1;
        }

    }
    else if (input1 == 65 || input1 == 97) // A
    {
        if (matriz1[bolinha.x][bolinha.y - 1] == 1)
        {
            return 1;
        }
    }
    else{
        return 0;
    }
}

int ganhar1(int matriz1[LINHA1][COLUNA1], Personagem bolinha)
{
    if (matriz1[bolinha.x -1][bolinha.y] == 3)
    {
        return 3;
    }
    else if (matriz1[bolinha.x ][bolinha.y+1] == 3)
    {
        return 3;
    }
    else if (matriz1[bolinha.x +1][bolinha.y] == 3)
    {
        return 3;
    }
    else if (matriz1[bolinha.x ][bolinha.y -1] == 3)
    {
        return 3;
    }
}

void andar1(int matriz1[LINHA1][COLUNA1], Personagem *bolinha, int input1)
{
    if ((input1 == 87 || input1 == 119) && (verificarParedes1(matriz1, *bolinha, input1) == 0))//W
    {
        bolinha->x = bolinha->x - 1;
    }
    else if ((input1 == 68 || input1 == 100) && (verificarParedes1(matriz1, *bolinha, input1) == 0)) // D
    {
        bolinha->y = bolinha->y + 1;
    }
    else if ((input1 == 83 || input1 == 115) && (verificarParedes1(matriz1, *bolinha, input1) == 0)) // S
    {
        bolinha->x = bolinha->x + 1;
    }
    else if ((input1 == 65 || input1 == 97) && (verificarParedes1(matriz1, *bolinha, input1) == 0)) // A
    {
        bolinha->y = bolinha->y - 1;
    }
    else
    {
        bolinha->x = 0;
        bolinha->y = 1;
    }
}