#include <stdio.h>
#include <stdlib.h>
#define LINHA 17
#define COLUNA 17

typedef struct
{
    int x;
    int y;
}Personagem;


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
            if (i == bolinha.y && j == bolinha.x)
            {
                printf("@ ");
            }
            else if (matriz[i][j] == 1)
            {
                printf("[]");
            }else if (matriz[i][j] == 0)
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

char inputUsuario()
{
    char direcao;

    scanf(" %c", &direcao);

    return direcao;
}

void verificarParedes(int matriz[LINHA][COLUNA], Personagem bolinha, char input)
{
    for (int i = 0; i < LINHA; i++)
    {
        for (int i = 0; i < COLUNA; i++)
        {
            if ()
            {
                /* code */
            }
            
        }
        
    }
    return 1;
}
void andar(int matriz[LINHA][COLUNA], Personagem bolinha){
    char input = inputUsuario();

    switch (input)
    {
        case 'w':
        case 'W':
            /* code for 'w' or 'W' */
            break;
        case 'a':
        case 'A':
            /* code for 'a' or 'A' */
            break;
        case 's':
        case 'S':
            /* code for 's' or 'S' */
            break;
        case 'd':
        case 'D':
            /* code for 'd' or 'D' */
            break;
        default:
            printf("Comando inválido!");
            break;
    }
}

int main(void)
{   
    Personagem bolinha;
    bolinha.x=0;
    bolinha.y=13;
    
    while (1)
    {
        mostrarLabirinto(matriz, x,y);
        printf("%c", inputUsuario());
        break;

    }


}