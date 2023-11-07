#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define LINHA 17
#define COLUNA 17

typedef struct
{
    int x;
    int y;
} Personagem;

int matriz[LINHA][COLUNA] = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
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

void mostrarLabirinto(int matriz[LINHA][COLUNA], Personagem bolinha)
{

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            if (j == bolinha.y && i == bolinha.x)
            {
                printf("**");
            }
            else if (matriz[i][j] == 1)
            {
                printf("[]");
            }
            else if (matriz[i][j] == 0)
            {
                printf("  ");
            }
            else if (matriz[i][j] == 2)
            {
                printf("  ");
            }
            else if (matriz[i][j] == 3)
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int verificarParedes(int matriz[LINHA][COLUNA], Personagem bolinha, int input)
{

    if (input == 87 || input == 119) //W
    {
        if (matriz[bolinha.x -1][bolinha.y] == 1)
        {
            return 1;
        }

    }
    else if (input == 68 || input == 100) // D
    {
        if (matriz[bolinha.x][bolinha.y + 1] == 1)
        {
            return 1;
        }

    }
    else if (input == 83 || input == 115) // S
    {
        if (matriz[bolinha.x + 1][bolinha.y] == 1)
        {
            return 1;
        }

    }
    else if (input == 65 || input == 97) // A
    {
        if (matriz[bolinha.x][bolinha.y - 1] == 1)
        {
            return 1;
        }
    }
    else{
        return 0;
    }
  
}

int ganhar(int matriz[LINHA][COLUNA], Personagem bolinha)
{
    if (matriz[bolinha.x -1][bolinha.y] == 3)
    {
        return 3;
    }
    else if (matriz[bolinha.x ][bolinha.y+1] == 3)
    {
        return 3;
    }
    else if (matriz[bolinha.x +1][bolinha.y] == 3)
    {
        return 3;
    }
    else if (matriz[bolinha.x ][bolinha.y -1] == 3)
    {
        return 3;
    }
}

int andar(int matriz[LINHA][COLUNA], Personagem *bolinha)
{
    while (1)
    {
        mostrarLabirinto(matriz, *bolinha);

        int input;

        input = getch();

        if (kbhit() == 0)
        {
            // W
            if (input == 87 || input == 119 && verificarParedes(matriz, *bolinha, input) == 0)
            {
                bolinha->x = bolinha->x - 1;
            }
            else if (input == 68 || input == 100 && verificarParedes(matriz, *bolinha, input) == 0) // D
            {
                bolinha->y = bolinha->y + 1;
            }
            else if (input == 83 || input == 115 && verificarParedes(matriz, *bolinha, input) == 0) // S
            {
                bolinha->x = bolinha->x + 1;
            }
            else if (input == 65 || input == 97 && verificarParedes(matriz, *bolinha, input) == 0) // A
            {
                bolinha->y = bolinha->y - 1;
            }
            else if(ganhar(matriz, *bolinha) == 3){ // O TEMPOOOOOOOOOOOOOOOO VAI RESOLVER O BREAKKKK!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
                // printf("Ganhou!");
                break;
            }
            else //if (verificarParedes(matriz, *bolinha, input) == 1)
            {
                bolinha->x = 13;
                bolinha->y = 0;
            }
            system("cls");
        }
    }
}


// int ganhar(int matrriz[LINHA][COLUNA], Personagem bolinha)
// {
//     if (bolinha.x == 3 && bolinha.y == 16)
//     {
//         return 3;
//     }
    
// }

int main(void)
{
    Personagem bolinha;
    bolinha.x = 13;
    bolinha.y = 0;

    while (1)
    {
        if (ganhar(matriz, bolinha) == 3)
        {
            printf("Ganhouuuuuuuuuuuuu!");
            break;
        }else
        {
            andar(matriz, &bolinha);
        }
            
    }


}