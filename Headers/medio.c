#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "../Headers/medio.h"

#define LINHA2 17
#define COLUNA2 17

int matriz2[LINHA2][COLUNA2] = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 3},
                                {1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1},
                                {1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1},
                                {1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1},
                                {1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1},
                                {1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1},
                                {1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
                                {1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1},
                                {1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1},
                                {1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1},
                                {2, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1},
                                {1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1},
                                {1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

void mostrarLabirinto2(int matriz2[LINHA2][COLUNA2], Personagem bolinha)
{
    int lab = 176;
    int quadrado = 219;

    for (int i = 0; i < LINHA2; i++)
    {
        for (int j = 0; j < COLUNA2; j++)
        {
            if (j == bolinha.y && i == bolinha.x)
            {
                printf("**");
            }
            else if (matriz2[i][j] == 1)
            {
                printf("%c%c", lab, lab);
            }
            else if (matriz2[i][j] == 0)
            {
                printf("  ");
            }
            else if (matriz2[i][j] == 2)
            {
                printf("  ");
            }
            else if (matriz2[i][j] == 3)
            {
                printf("%c%c", quadrado, quadrado);
            }
        }
        printf("\n");
    }
}

int verificarParedes2(int matriz2[LINHA2][COLUNA2], Personagem bolinha, int input2)
{
    if (input2 == 87 || input2 == 119) //W
    {
        if (matriz2[bolinha.x -1][bolinha.y] == 1)
        {
            return 1;
        }

    }
    else if (input2 == 68 || input2 == 100) // D
    {
        if (matriz2[bolinha.x][bolinha.y + 1] == 1)
        {
            return 1;
        }

    }
    else if (input2 == 83 || input2 == 115) // S
    {
        if (matriz2[bolinha.x + 1][bolinha.y] == 1)
        {
            return 1;
        }

    }
    else if (input2 == 65 || input2 == 97) // A
    {
        if (matriz2[bolinha.x][bolinha.y - 1] == 1)
        {
            return 1;
        }
    }
    else{
        return 0;
    }
}

int ganhar2(int matriz2[LINHA2][COLUNA2], Personagem bolinha)
{
    if (matriz2[bolinha.x -1][bolinha.y] == 3)
    {
        return 3;
    }
    else if (matriz2[bolinha.x ][bolinha.y+1] == 3)
    {
        return 3;
    }
    else if (matriz2[bolinha.x +1][bolinha.y] == 3)
    {
        return 3;
    }
    else if (matriz2[bolinha.x ][bolinha.y -1] == 3)
    {
        return 3;
    }
}

void andar2(int matriz2[LINHA2][COLUNA2], Personagem *bolinha, int input2)
{
    if ((input2 == 87 || input2 == 119) && (verificarParedes2(matriz2, *bolinha, input2) == 0))//W
    {
        bolinha->x = bolinha->x - 1;
    }
    else if ((input2 == 68 || input2 == 100) && (verificarParedes2(matriz2, *bolinha, input2) == 0)) // D
    {
        bolinha->y = bolinha->y + 1;
    }
    else if ((input2 == 83 || input2 == 115) && (verificarParedes2(matriz2, *bolinha, input2) == 0)) // S
    {
        bolinha->x = bolinha->x + 1;
    }
    else if ((input2 == 65 || input2 == 97) && (verificarParedes2(matriz2, *bolinha, input2) == 0)) // A
    {
        bolinha->y = bolinha->y - 1;
    }
    else
    {
        bolinha->x = 0;
        bolinha->y = 1;
    }
}