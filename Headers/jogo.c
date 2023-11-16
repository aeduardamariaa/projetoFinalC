
#include "../Headers/jogo.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

#define COLOR_RESET "\e[0m"
#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"

void ganhou()
{
    int fontA = 219, fontB = 176;

    printf("\n \n \n \n");
    printf(YEL "\n\t    %c%c      %c%c%c%c    %c%c%c%c%c%c    %c%c    %c%c%c%c \n", fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA);
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
    printf("\t      %c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c \n", fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA);
    printf("\t        %c%c  %c%c%c%c    %c%c%c%c  %c%c      %c%c%c%c  %c%c%c%c  \n", fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB);
    printf(COLOR_RESET "\n");
}

void perdeu()
{
    int fontA = 219, fontB = 176;

    printf("\n \n \n \n");
    printf(RED "\n\t\t    %c%c      %c%c%c%c    %c%c%c%c%c%c    %c%c    %c%c%c%c \n", fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA);
    printf("\t\t    %c%c%c%c    %c%c%c%c%c%c%c%c  %c%c%c%c%c%c  %c%c%c%c  %c%c%c%c%c%c\n", fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB);
    printf("\t\t    %c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c\n", fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB);
    printf("\t\t      %c%c%c%c%c%c%c%c%c%c  %c%c%c%c  %c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c\n", fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB);
    printf("\t\t        %c%c%c%c%c%c%c%c  %c%c%c%c  %c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c\n", fontA, fontA, fontA, fontA, fontB, fontB, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB);
    printf("\t\t        %c%c%c%c%c%c    %c%c%c%c  %c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c\n", fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB);
    printf("\t\t        %c%c%c%c%c%c      %c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c\n", fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontB, fontB, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontB, fontB);
    printf("\t\t          %c%c%c%c        %c%c%c%c%c%c      %c%c%c%c%c%c\n", fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB);

    printf("\n\t    %c%c%c%c          %c%c%c%c%c%c%c%c      %c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c  %c%c%c%c                        \n", fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA);
    printf("\t    %c%c%c%c%c%c      %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c          \n", fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontB, fontB, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontB, fontB, fontB, fontB, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB);
    printf("\t    %c%c%c%c%c%c      %c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c      %c%c%c%c%c%c%c%c      %c%c%c%c%c%c        \n", fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB);
    printf("\t    %c%c%c%c%c%c      %c%c%c%c%c%c  %c%c%c%c%c%c  %c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c    %c%c%c%c%c%c      \n", fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB);
    printf("\t    %c%c%c%c%c%c      %c%c%c%c%c%c  %c%c%c%c%c%c    %c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c      \n", fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontB, fontB, fontB, fontB, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontB, fontB, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB);
    printf("\t    %c%c%c%c%c%c      %c%c%c%c%c%c  %c%c%c%c%c%c%c%c      %c%c%c%c%c%c%c%c%c%c%c%c        %c%c%c%c        \n", fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontA, fontA, fontA, fontA, fontB, fontB, fontB, fontB, fontB, fontB);
    printf("\t    %c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c                \n", fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontB, fontB, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontB, fontB, fontB, fontB, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA);
    printf("\t      %c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c      %c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c  %c%c%c%c                      \n", fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB, fontB);
    printf(COLOR_RESET "\n");
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
                printf(CYN "**");
            }
            else if (matriz[i][j] == 1)
            {
                printf(COLOR_RESET "%c%c", lab, lab);
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
                printf(CYN "%c%c", quadrado, quadrado);
            }
        }
        printf("\n");
    }

    fflush(stdout);
}

int verificarParedes(int matriz[LINHA][COLUNA], Personagem bolinha, int input)
{
    if (input == 87 || input == 119) // W
    {
        if (matriz[bolinha.x - 1][bolinha.y] == 1)
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
    else
    {
        return 0;
    }
}

int ganhar(int matriz[LINHA][COLUNA], Personagem bolinha)
{
    if (matriz[bolinha.x - 1][bolinha.y] == 3)
    {
        return 3;
    }
    else if (matriz[bolinha.x][bolinha.y + 1] == 3)
    {
        return 3;
    }
    else if (matriz[bolinha.x + 1][bolinha.y] == 3)
    {
        return 3;
    }
    else if (matriz[bolinha.x][bolinha.y - 1] == 3)
    {
        return 3;
    }
}

void andar(int matriz[LINHA][COLUNA], Personagem *bolinha, int input)
{
    if ((input == 87 || input == 119) && (verificarParedes(matriz, *bolinha, input) == 0)) // W
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
                if (matriz[i][j] == 2)
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

    secs = (data_hora_atual->tm_sec) + 60 * (data_hora_atual->tm_min + (60 * data_hora_atual->tm_hour));
    return (secs);
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
void jogo(int matriz[LINHA][COLUNA], Personagem bolinha)
{
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
                fflush(stdout);
                Sleep(3000);
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
            printf("\nTimer: 0 : %2.f\n", tempo_restante);
            atualizar_tela = 0;
            inicio = clock();
            fflush(stdout);
        }

        if (tempo_restante < 0)
        {
            system("cls");
            perdeu();
            fflush(stdout);
            Sleep(3000);
            break;
        }
    }
}

void atualizarScore(Score passado[], int *tamanho)
{
    FILE *arquivo;

    *tamanho = 0;
    char linha[100];

    arquivo = fopen("Ranking.txt", "r");

    while (fgets(linha, sizeof(linha), arquivo) != NULL)
    {
        sscanf(linha, "%s %d %d %d", passado[*tamanho].NomeP, &passado[*tamanho].TempoP1, &passado[*tamanho].TempoP2, &passado[*tamanho].TempoP3);
        (*tamanho)++;
    }
    fclose(arquivo);
}

// void adicionarJogadorTempo(Jogador jogador, Score passado[],int tamanho)
// {
//     Jogador jogador;
//     FILE *arquivo;

//     int igual = 0, jaTem = 0, tempoalterado = 0;
    
//     char jogNome[20];
//     char histNome[20];
    
//     strcpy(jogNome, jogador.Nome);

//     // Verifica se tem outro nome igual
//     for(int i = 0; i < tamanho; i++)
//     {   
//         strcpy(histNome, passado[i].NomeP);
        
//         for(int j = 0; j < strlen(jogador.Nome); j++)
//         {
//             if (histNome[j] == jogNome[j])
//             {   
//                 igual++;
//             } 
//             if (igual >= strlen(jogNome) && igual == strlen(histNome))
//             {
//                 jaTem = 1;
                
//                 if(passado[i].TempoP1 != jogador.Tempo1)
//                 {
//                     // alterarTempo(&passado, jogador, i, 1);
//                     tempoalterado = 1;
//                 }
//                 if(passado[i].TempoP2 != jogador.Tempo2)
//                 {   
//                     // alterarTempo(&passado, jogador, i, 2);
//                     tempoalterado = 1;
//                 }
//                 if(passado[i].TempoP3 != jogador.Tempo3)
//                 {   
//                     // alterarTempo(&passado, jogador, i, 3);
//                     tempoalterado = 1;
//                 }
                
//                 arquivo = fopen("Ranking.txt", "w"); 

//                 for(int k = 0; k < tamanho; k++)
//                 {   
//                     fprintf(arquivo, "%s %d %d %d\n", passado[k].NomeP, passado[k].TempoP1, passado[k].TempoP2, passado[k].TempoP3);
//                 }
//                 fclose(arquivo);
//             } 
//         }
//         igual = 0;
//     }
    
//     arquivo = fopen("Ranking.txt", "a");
//     if(jaTem == 0)
//     {
//         printf("Adicionado com sucesso.\n");
//         fprintf(arquivo, "%s %d %d %d\n", jogador.Nome, jogador.Tempo1, jogador.Tempo2, jogador.Tempo3);
//     }
//     else if (jaTem == 1 && tempoalterado == 0)
//     {
//         printf("Ja possui um jogador com esse nome.\n");
//     }
//     else
//     {
//         printf("Tempo alterado\n");
//     }
//     fclose(arquivo);
    
// }

// void alterarTempo(Score *passado[], Jogador jogador, int i ,int tempo)
// {   
//     if (tempo == 1){
//        passado[i]->TempoP1 = jogador.Tempo1; 
//     }
//     else if (tempo == 2){
//         passado[i]->TempoP2 = jogador.Tempo2; 
//     }
//     else if (tempo ==3){
//         passado[i]->TempoP3 = jogador.Tempo3; 
//     }  
        
// }

void imprimirTresMaioresTempoP1(Score passado[], int tamanho)
{
    int tresMaiores[3] = {0};
    char nomes[3][50];

    for (int i = 0; i < tamanho; i++)
    {
        if (passado[i].TempoP1 > tresMaiores[0])
        {
            strcpy(nomes[2], nomes[1]);
            strcpy(nomes[1], nomes[0]);
            strcpy(nomes[0], passado[i].NomeP);
            tresMaiores[2] = tresMaiores[1];
            tresMaiores[1] = tresMaiores[0];
            tresMaiores[0] = passado[i].TempoP1;
        }
        else if (passado[i].TempoP1 > tresMaiores[1])
        {
            strcpy(nomes[2], nomes[1]);
            strcpy(nomes[1], passado[i].NomeP);
            tresMaiores[2] = tresMaiores[1];
            tresMaiores[1] = passado[i].TempoP1;
        }
        else if (passado[i].TempoP1 > tresMaiores[2])
        {
            strcpy(nomes[2], passado[i].NomeP);
            tresMaiores[2] = passado[i].TempoP1;
        }
    }

    printf("Os três maiores valores de TempoP1 são: %d (%s), %d (%s), %d (%s)\n", tresMaiores[0], nomes[0], tresMaiores[1], nomes[1], tresMaiores[2], nomes[2]);
}

void imprimirTresMaioresTempoP2(Score passado[], int tamanho)
{
    int tresMaiores[3] = {0};
    char nomes[3][50];

    for (int i = 0; i < tamanho; i++)
    {
        if (passado[i].TempoP2 > tresMaiores[0])
        {
            strcpy(nomes[2], nomes[1]);
            strcpy(nomes[1], nomes[0]);
            strcpy(nomes[0], passado[i].NomeP);
            tresMaiores[2] = tresMaiores[1];
            tresMaiores[1] = tresMaiores[0];
            tresMaiores[0] = passado[i].TempoP2;
        }
        else if (passado[i].TempoP2 > tresMaiores[1])
        {
            strcpy(nomes[2], nomes[1]);
            strcpy(nomes[1], passado[i].NomeP);
            tresMaiores[2] = tresMaiores[1];
            tresMaiores[1] = passado[i].TempoP2;
        }
        else if (passado[i].TempoP2 > tresMaiores[2])
        {
            strcpy(nomes[2], passado[i].NomeP);
            tresMaiores[2] = passado[i].TempoP2;
        }
    }

    printf("Os três maiores valores de TempoP2 são: %d (%s), %d (%s), %d (%s)\n", tresMaiores[0], nomes[0], tresMaiores[1], nomes[1], tresMaiores[2], nomes[2]);
}

void imprimirTresMaioresTempoP3(Score passado[], int tamanho)
{
    int tresMaiores[3] = {0};
    char nomes[3][50];

    for (int i = 0; i < tamanho; i++)
    {
        if (passado[i].TempoP3 > tresMaiores[0])
        {
            strcpy(nomes[2], nomes[1]);
            strcpy(nomes[1], nomes[0]);
            strcpy(nomes[0], passado[i].NomeP);
            tresMaiores[2] = tresMaiores[1];
            tresMaiores[1] = tresMaiores[0];
            tresMaiores[0] = passado[i].TempoP3;
        }
        else if (passado[i].TempoP3 > tresMaiores[1])
        {
            strcpy(nomes[2], nomes[1]);
            strcpy(nomes[1], passado[i].NomeP);
            tresMaiores[2] = tresMaiores[1];
            tresMaiores[1] = passado[i].TempoP3;
        }
        else if (passado[i].TempoP3 > tresMaiores[2])
        {
            strcpy(nomes[2], passado[i].NomeP);
            tresMaiores[2] = passado[i].TempoP3;
        }
    }

    printf("Os três maiores valores de TempoP3 são: %d (%s), %d (%s), %d (%s)\n", tresMaiores[0], nomes[0], tresMaiores[1], nomes[1], tresMaiores[2], nomes[2]);
}