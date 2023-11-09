#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "../Headers/jogo.c"
#include "../Headers/tabuleiro.c"

int LINHA; 
int COLUNA;
void menu()
{
    printf("\n***************** M E N U *****************\n\n");
    printf("\n1 - Nivel Facil");
    printf("\n2 - Nivel Medio");
    printf("\n3 - Nível Dificil");
    printf("\n4 - Ranking");
    printf("\n0 - SAIR\n\n");
}

int main(void)
{
    int op = 10;
    Personagem bolinha;

    

    while (op != 0)
    {
        menu();
        printf("Qual sua escolha: ");
        scanf("%d", &op);

        system("cls");

        switch (op)
        {
        case 1:
            bolinha.x = 3;
            bolinha.y = 0;

            LINHA =10;
            COLUNA=10;

            while (1)
            {
                mostrarLabirinto(matriz1, bolinha);

                int input;

                input = getch();

                if (kbhit() == 0)
                {

                    if (ganhar(matriz1, bolinha) == 3)
                    {
                        printf("Ganhouuuuuuuuuuuuu!");
                        break;
                    }
                    else
                    {
                        andar(matriz1, &bolinha, input);
                    }
                }
                system("cls");
            }

            break;
        
        case 2:
            bolinha.x = 13;
            bolinha.y = 0;

            LINHA =17;
            COLUNA=17;

            while (1)
            {
                mostrarLabirinto(matriz2, bolinha);

                int input;

                input = getch();

                if (kbhit() == 0)
                {
                    if (ganhar(matriz2, bolinha) == 3)
                    {
                        printf("Ganhouuuuuuuuuuuuu!");
                        break;
                    }
                    else
                    {
                        andar(matriz2, &bolinha, input);
                    }
                }
                system("cls");
            }

            break;
        case 3:

            bolinha.x = 0;
            bolinha.y = 1;

            LINHA =50;
            COLUNA=50;

            while (1)
            {
                mostrarLabirinto(matriz3, bolinha);

                int input;

                input = getch();

                if (kbhit() == 0)
                {
                    if (ganhar(matriz3, bolinha) == 3)
                    {
                        printf("Ganhouuuuuuuuuuuuu!");
                        break;
                    }
                    else
                    {
                        andar(matriz3, &bolinha, input);
                    }
                }
                system("cls");
            }
            break;

        case 4:
            break;
        default:
            printf("\nSaindo!");
        } 

    }
}