
#include "../Headers/jogo.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>


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
void jogo(int matriz[LINHA][COLUNA], Personagem bolinha){
    int atualizar_tela = 1;
    struct tm tempo_inicial, tempo_atual;
    float tempo_inicial_segundos;
    float tempo_atual_segundos;
    float tempo_decorrido;
    float tempo_restante;
    tempo_inicial = tempoAtual();
    tempo_inicial_segundos = seconds(&tempo_inicial);
    
    
    int input;
    

    while (1)
    {
        tempo_atual = tempoAtual();
        tempo_atual_segundos = seconds(&tempo_atual);
        
        tempo_decorrido = tempo_atual_segundos - tempo_inicial_segundos;
        tempo_restante = 59.00 - tempo_decorrido;

        if (kbhit())
        {
            atualizar_tela = 1;
            input = getch();
            if (ganhar(matriz, bolinha) == 3)
            {
                printf("Ganhouuuuuuuuuuuuu!");
                break;
            }
            else
            {
                andar(matriz, &bolinha, input);
            }
        }

        if (atualizar_tela)
        {
            system("cls");
            mostrarLabirinto(matriz, bolinha);
            printf("\nTimer: 0 : %2.f", tempo_restante);
            atualizar_tela = 0;
        }

        if (tempo_restante < 0)
        {
            printf("\nVoce perdeu :\\");
            break;
        }
    }
}