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
            }else if(matriz[i][j] == 2){
                printf("  ");
            }
        }
        printf("\n");
    }
}


// void verificarParedes(int matriz[LINHA][COLUNA], Personagem bolinha, char input)
// {
//     for (int i = 0; i < LINHA; i++)
//     {
//         for (int i = 0; i < COLUNA; i++)
//         {
//             if ()
//             {
//                 /* code */
//             }

//         }

//     }
//     return 1;
// }
void andar(int matriz[LINHA][COLUNA], Personagem * bolinha)
{
    while(1){
        mostrarLabirinto(matriz, *bolinha);

        int input; 

        input = getch();

        if (kbhit() == 0)
        {
            // W
            if (input == 87 || input == 119)
            {
                bolinha->x = bolinha->x - 1;
            }
            else if (input == 68 || input == 100) //D
            {
                bolinha->y = bolinha->y + 1;
            }
            else if (input == 83 || input == 115)//S
            {
                bolinha->x = bolinha->x + 1;
            }
            else if (input == 65 || input == 97) //A
            {
                bolinha->y = bolinha->y - 1;
            }
            system("cls");  
        }
    }
}

int main(void)
{
    Personagem bolinha;
    bolinha.x = 13;
    bolinha.y = 0;

    while (1)
    {
        // mostrarLabirinto(matriz, bolinha);
        andar(matriz, &bolinha);
        // printf("%d", inputUsuario());
        break;
    }
}