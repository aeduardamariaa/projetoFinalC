
#include "../Headers/jogo.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>


void ganhou()
{
    int fontA = 219, fontB = 176;

    printf("\n \n \n \n");
    printf("\n\t    %c%c      %c%c%c%c    %c%c%c%c%c%c    %c%c    %c%c%c%c \n", fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA);
    printf("\t    %c%c%c%c    %c%c%c%c%c%c%c%c  %c%c%c%c%c%c  %c%c%c%c  %c%c%c%c%c%c\n", fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB);
    printf("\t    %c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c\n", fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB);
    printf("\t      %c%c%c%c%c%c%c%c%c%c  %c%c%c%c  %c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c\n", fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB);
    printf("\t        %c%c%c%c%c%c%c%c  %c%c%c%c  %c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c\n", fontA, fontA, fontA, fontA, fontB, fontB, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB);
    printf("\t        %c%c%c%c%c%c    %c%c%c%c  %c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c\n", fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB);
    printf("\t        %c%c%c%c%c%c      %c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c\n", fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontB, fontB, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontB, fontB);
    printf("\t          %c%c%c%c        %c%c%c%c%c%c      %c%c%c%c%c%c\n", fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB);

    printf("\n\t    %c%c      %c%c%c%c  %c%c%c%c  %c%c      %c%c%c%c  %c%c%c%c  \n", fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA);
    printf("\t    %c%c%c%c    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c%c%c \n", fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB);
    printf("\t    %c%c%c%c    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  \n", fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB);
    printf("\t    %c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c \n", fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB);
    printf("\t    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c%c%c \n", fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB);
    printf("\t    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c  %c%c%c%c  \n", fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontB, fontB, fontB, fontB);
    printf("\t      %c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c \n", fontA, fontA,  fontA, fontA,  fontA, fontA, fontB, fontB, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA);
    printf("\t        %c%c  %c%c%c%c    %c%c%c%c  %c%c      %c%c%c%c  %c%c%c%c  \n", fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB,fontB);
}

void mostrarLabirinto(int matriz[LINHA][COLUNA], Personagem bolinha)
{
    int lab = 176;
    int quadrado = 219;

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
                printf("%c%c", lab, lab);
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
                printf("%c%c", quadrado, quadrado);
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

void andar(int matriz[LINHA][COLUNA], Personagem *bolinha, int input)
{
    if ((input == 87 || input == 119) && (verificarParedes(matriz, *bolinha, input) == 0))//W
    {
        bolinha->x = bolinha->x - 1;
    }
    else if ((input == 68 || input == 100) && (verificarParedes(matriz, *bolinha, input) == 0)) // D
    {
        bolinha->y = bolinha->y + 1;
    }
    else if ((input == 83 || input == 115) && (verificarParedes(matriz, *bolinha, input) == 0)) // S
    {
        bolinha->x = bolinha->x + 1;
    }
    else if ((input == 65 || input == 97) && (verificarParedes(matriz, *bolinha, input) == 0)) // A
    {
        bolinha->y = bolinha->y - 1;
    }
    else
    {
        for (int i = 0; i < LINHA; i++)
            {
                for (int j = 0; j < COLUNA; j++)
                {
                    if (matriz[i][j]==2)
                    {
                        bolinha->x = i;
                        bolinha->y = j;
                    }
                    
                }
                
            }
    }
}


struct tm tempoAtual()
{
    struct tm *data_hora_atual;  
    time_t segundos;
    time(&segundos);   
    data_hora_atual = localtime(&segundos);   
    return *data_hora_atual;
}

float seconds(struct tm *data_hora_atual)
{
    float secs;

    secs = (data_hora_atual->tm_sec) + 60*(data_hora_atual->tm_min + (60 * data_hora_atual->tm_hour));
    return(secs);

}
int defTempo(int matriz[LINHA][COLUNA])
{

    float tempo = 0;

    if (LINHA == 17)
    {
        tempo = 15;
    }
    else if (LINHA == 35)
    {
        tempo = 40;
    }
    else if (LINHA == 50)
    {
        tempo = 50;
    }
    
    return tempo;
}
void jogo(int matriz[LINHA][COLUNA], Personagem bolinha){
    int input;
    struct tm tempo_inicial, tempo_atual;
    float tempo_inicial_segundos, tempo_atual_segundos, tempo_decorrido, tempo_restante;
    tempo_inicial = tempoAtual();
    tempo_inicial_segundos = seconds(&tempo_inicial);

    int tempo = defTempo(matriz);
    int atualizar_tela = 1;
    clock_t inicio = clock();

    while (1)
    {
        if (kbhit())
        {
            atualizar_tela = 1;
            input = getch();
            if (ganhar(matriz, bolinha) == 3)
            {
                system("cls");
                ganhou();
                break;
            }
            else
            {
                andar(matriz, &bolinha, input);
            }
        }

        tempo_atual = tempoAtual();
        tempo_atual_segundos = seconds(&tempo_atual);
        tempo_decorrido = tempo_atual_segundos - tempo_inicial_segundos;
        tempo_restante = tempo - tempo_decorrido;

        if (atualizar_tela || ((clock() - inicio) / CLOCKS_PER_SEC) >= 1)
        {
            system("cls");
            mostrarLabirinto(matriz, bolinha);
            printf("\nTimer: 0 : %2.f", tempo_restante);
            atualizar_tela = 0;
            inicio = clock();
        }

        if (tempo_restante < 0)
        {
            printf("\nVoce perdeu :\\");
            break;
        }
    }
}
