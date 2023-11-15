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
    int m = 186, n = 205;
    int a = 201 , b = 187, c = 200, d = 188;
    printf("\n\t%c%c%c%c%c%c%c%c M E N U %c%c%c%c%c%c%c%c",a,n,n,n,n,n,n,n,n,n,n,n,n,n,n,b);
    printf("\n\t%c\t\t\t%c",m,m);
    printf("\n\t%c\t1 - Jogar\t%c",m,m);
    printf("\n\t%c\t2 - Ranking\t%c",m,m);
    printf("\n\t%C\t0 - SAIR\t%c",m,m);
    printf("\n\t%c\t\t\t%c",m,m);
    printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",c,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,d);
}
void menuDificuldades()
{   
    int m = 186, n = 205;
    int a = 201 , b = 187, c = 200, d = 188;
    int i = 161, p = 160, e = 130;
    printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,b);
    printf("\n\t%c\t\t\t\t%c",m,m);
    printf("\n\t%c\t1 - N%cvel F%ccil\t\t%c",m,i,p,m);
    printf("\n\t%c\t2 - N%cvel M%Cdio\t\t%c",m,i,e,m);
    printf("\n\t%C\t3 - N%cvel Dif%ccil\t%c",m,i,i,m);
    printf("\n\t%c\t\t\t\t%c",m,m);
    printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",c,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,d);
}

int verificarOpcao(int op, int array[10], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        {
            if (op == array[i])
            {
                return 1;
            }
        }
}

int main(void)
{
    int op = 10;
    int escolha = 10;
    Personagem bolinha;
    int array1[10] = {0,1,2,3,4,5,6,7,8,9};
    int array2[3] = {1,2,3};
    int verdade = 0;
    int tamanho = 10;

    while (op != 0)
    {
        system("cls");
        menu();
        printf("\n\tQual sua escolha: ");
        scanf("%d", &op);
        
        verdade = verificarOpcao(op, array1, tamanho);
        if (verdade == 1)
        {
            verdade = 0;
            tamanho = 3;
            switch (op)
            {
                case 1:
                system("cls");
                menuDificuldades();
                printf("\n\tQual sua escolha: ");
                scanf("%d", &escolha);
                
                verdade = verificarOpcao(escolha, array2, tamanho); 

                if (verdade == 1)
                {
                    system("cls");
                    switch (escolha)
                    {
                        case 1:
                            bolinha.x = 13;
                            bolinha.y = 0;

                            LINHA =17;
                            COLUNA=17;

                            jogo(matriz1, bolinha);

                            break;
                        
                        case 2:
                            bolinha.x = 0;
                            bolinha.y = 1;

                            LINHA =35;
                            COLUNA=35;

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
                        // default:
                        //     printf("\nSaindo!");
                        //     break;
                    }
                }
                else
                {
                    system("cls");
                    printf("\nOperacao invalida, tente novamente!!");
                    break;
                }
            case 2:
                printf("rankng!");
                break;
            default:
                printf("saundo");
                break;
            }
        }
        else
        {
            system("cls");
            printf("\nOperacao invalida, tente novamente!!");
            break;
        }
    }
}