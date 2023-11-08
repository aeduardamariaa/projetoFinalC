#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// typedef struct
// {
//     int x;
//     int y;
// } Personagem;


#include "../Headers/jogo.h"
#include "../Headers/jogo.c"


// #include "../Headers/tabuleiro.h"
// #include "../Headers/tabuleiro.c"

// int LINHA2 = 17;
// int COLUNA2 = 17;

// int matriz2[17][17] = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
//                                 {1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
//                                 {1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
//                                 {1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 3},
//                                 {1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1},
//                                 {1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1},
//                                 {1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1},
//                                 {1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1},
//                                 {1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1},
//                                 {1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
//                                 {1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1},
//                                 {1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1},
//                                 {1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1},
//                                 {2, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1},
//                                 {1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1},
//                                 {1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
//                                 {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};


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
    menu();
    Personagem bolinha;
    
    bolinha.x=13;
    bolinha.y=0;

    while (1)
    {
        mostrarLabirinto(matriz, bolinha);
        int input;

        input = getch();

        

        if (kbhit() == 0)
        {

        if (ganhar(matriz, bolinha) == 3)
        {
            printf("Ganhouuuuuuuuuuuuu!");
            break;
        }
        else
        {
            andar(matriz, &bolinha, input);
        }
        system("cls");
        }
    }
    

















    // int op;

    // while (op != 0 )
    // {   
    //     menu();
    //     printf("\nQual opcao voce deseja: ");
    //     scanf(" %d", &op);

    //     switch (op)
    //     {
    //     case 1:


    //         bolinha.x = 0;
    //         bolinha.y = 3;

    //         while (1)
    //         {
    //         mostrarLabirinto(matriz, bolinha);

    //         int input;

    //         input = getch();


    //         if (kbhit() == 0)
    //         {

    //         if (ganhar(matriz, bolinha) == 3)
    //         {
    //             printf("Ganhouuuuuuuuuuuuu!");
    //             break;
    //         }
    //         else
    //         {
    //             andar(matriz, &bolinha, input);
    //         }
    //         system("cls");
            
    //             }
    //         }

    //         break;
        
    //     case 2:
    //         break;

    //     case 3:
    //         break;

    //     case 4:
    //         break;
    //     default:
    //         printf("\nSaindo!");
    //     } 
}