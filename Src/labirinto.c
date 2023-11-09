#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include "../Headers/jogo.c"
#include "../Headers/tabuleiro.h"


int LINHA; 
int COLUNA;

void menu()
{
    printf("\n***************** M E N U *****************\n\n");
    printf("\n1 - Jogar");
    printf("\n2 - Ranking");
    printf("\n0 - SAIR\n\n");
}
void menuDificuldades()
{
    printf("\n1 - Nivel Facil");
    printf("\n2 - Nivel Medio");
    printf("\n3 - Nível Dificil");
}

int temporizador(int minutos, int segundos, int parar)
{
    while (parar!=0)
    {
        Sleep(1000);
        system("cls");

        printf("\n %2i : %2i", minutos, segundos);

        segundos --;

        if(segundos == 0 && minutos == 0){
            printf("\nO tempo acabou");
            break;
        }
        if (minutos > 0 && segundos == 0)
        {
            minutos --;
            segundos = 59;
        }
    }
}


int main(void)
{
    int op = 10;
    Personagem bolinha;

    while (op != 0)
    {
        system("cls");
        menu();
        printf("\nQual sua escolha: \n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            menuDificuldades();
            printf("\nQual sua escolha: \n");
            scanf("%d", &op);
            system("cls");
            switch (op)
            {
                case 1:
                    bolinha.x = 3;
                    bolinha.y = 0;

                    LINHA =10;
                    COLUNA=10;

                    jogo(matriz1, bolinha);

                    break;
                
                case 2:
                    bolinha.x = 13;
                    bolinha.y = 0;

                    LINHA =17;
                    COLUNA=17;

                    jogo(matriz2, bolinha);
                    break;
                case 3:

                    bolinha.x = 0;
                    bolinha.y = 1;

                    LINHA =50;
                    COLUNA=50;

                    jogo(matriz3, bolinha);
                    break;

                case 4:
                    break;
                default:
                    printf("\nSaindo!");
            }
            break;
        case 2:
            printf("rankng!");
            break;
        default:
            printf("saundo");
            break;
        }

    }
}