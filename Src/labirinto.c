#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include "../Headers/jogo.c"
#include "../Headers/tabuleiro.h"


int LINHA;
int COLUNA;

void adicionarJogadorTempo(Jogador jogador, Score passado[],int tamanho)
{
    
    FILE *arquivo;

    int igual = 0, jaTem = 0, tempoalterado = 0;
    
    
    char jogNome[20];
    char histNome[20];
    
    strcpy(jogNome, jogador.Nome);

    // Verifica se tem outro nome igual
    for(int i = 0; i < tamanho; i++)
    {   
        strcpy(histNome, passado[i].NomeP);
        
        for(int j = 0; j < strlen(jogador.Nome); j++)
        {
            if (histNome[j] == jogNome[j])
            {   
                igual++;
            } 
            if (igual >= strlen(jogNome) && igual == strlen(histNome))
            {
                jaTem = 1;
                
                if(passado[i].TempoP1 != jogador.Tempo1)
                {
                    passado[i].TempoP1 = jogador.Tempo1;
                    tempoalterado = 1;
                }
                if(passado[i].TempoP2 != jogador.Tempo2)
                {   
                    passado[i].TempoP2 = jogador.Tempo2;
                    tempoalterado = 1;
                }
                if(passado[i].TempoP3 != jogador.Tempo3)
                {   
                    passado[i].TempoP3 =jogador.Tempo3;
                    tempoalterado = 1;
                }
                
                arquivo = fopen("Ranking.txt", "w"); 

                for(int k = 0; k < tamanho; k++)
                {   
                    fprintf(arquivo, "%s %d %d %d\n", passado[k].NomeP, passado[k].TempoP1, passado[k].TempoP2, passado[k].TempoP3);
                }
                fclose(arquivo);
            } 
        }
        igual = 0;
    }
    
    arquivo = fopen("Ranking.txt", "a");
    if(jaTem == 0)
    {
        printf("Adicionado com sucesso.\n");
        fprintf(arquivo, "%s %d %d %d\n", jogador.Nome, jogador.Tempo1, jogador.Tempo2, jogador.Tempo3);
    }
    else if (jaTem == 1 && tempoalterado == 0)
    {
        printf("Ja possui um jogador com esse nome.\n");
    }
    else
    {
        printf("Tempo alterado\n");
    }
    fclose(arquivo);
    
}


void menu()
{
    int m = 186, n = 205;
    int a = 201 , b = 187, c = 200, d = 188;
    printf("\n\t%c%c%c%c%c%c%c%c M E N U %c%c%c%c%c%c%c%c",a,n,n,n,n,n,n,n,n,n,n,n,n,n,n,b);
    printf("\n\t%c\t\t\t%c",m,m);
    printf("\n\t%c\t");
    printf(COLOR_RESET"1 - Jogar\t",m);
    printf("%c",m);
    printf("\n\t%c\t",m);
    printf(COLOR_RESET"2 - Ranking\t");
    printf("%c",m);
    printf("\n\t%c\t",m);
    printf(COLOR_RESET"0 - SAIR\t");
    printf("%c",m);
    printf("\n\t%c\t\t\t%c",m,m);
    printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",c,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,d);
    printf(COLOR_RESET"");
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

int verificarOpcao(char op, char array[3])
{
    for (int i = 0; i < 3; i++)
        {
            if (op == array[i])
            {
                return 1;
            }
        }
}

int main(void)
{
    char buffer[8192];

    char op = "100";
    char escolha = "10";
    Personagem bolinha;
    char array1[3] = {'0','1','2'};
    char array2[3] = {'1','2','3'};
    int verdade = 0;

    Jogador jogador;
    FILE *arquivo;
    int tamanhoArq = 0;
    Score passado[50];
    jogador.Tempo1 = 50;
    jogador.Tempo2 = 50;
    jogador.Tempo3 = 50;

      
    
    printf("\n\tNome do Jogador: ");
    scanf(" %s", &jogador.Nome);
    

    atualizarScore(passado, &tamanhoArq);

    while (op != '0')
    {
        system("cls");
        menu();
        printf("\n\tQual sua escolha: ");
        fflush(stdout);

        scanf(" %c", &op);
        
        verdade = verificarOpcao(op, array1);
        if (verdade == 1)
        {
            verdade = 0;
            switch (op)
            {
                case '1':              
                while (1)
                {
                    system("cls");
                    menuDificuldades();
                    printf("\n\tQual sua escolha: ");
                    fflush(stdout);

                    scanf(" %c", &escolha);

                    
                    verdade = verificarOpcao(escolha, array2); 

                    if (verdade == 1)
                    {
                        verdade = 0;
                        system("cls");
                        switch (escolha)
                        {
                            case '1':
                                bolinha.x = 13;
                                bolinha.y = 0;

                                LINHA =17;
                                COLUNA=17;

                                jogo(matriz1, bolinha, &jogador);
                                atualizarScore(passado, &tamanhoArq);
                                adicionarJogadorTempo(jogador, passado, tamanhoArq);
                                Sleep(3000);

                                break;
                            
                            case '2':
                                bolinha.x = 0;
                                bolinha.y = 1;

                                LINHA =35;
                                COLUNA=35;

                                jogo(matriz2, bolinha, &jogador);
                                atualizarScore(passado, &tamanhoArq);
                                adicionarJogadorTempo(jogador, passado, tamanhoArq);
                                Sleep(3000);
                                
                                break;

                            case '3':

                                bolinha.x = 0;
                                bolinha.y = 1;

                                LINHA =50;
                                COLUNA=50;

                                jogo(matriz3, bolinha, &jogador);
                                atualizarScore(passado, &tamanhoArq);
                                adicionarJogadorTempo(jogador, passado, tamanhoArq);
                                Sleep(3000);
                                break;
                            // default:
                            //     printf("ALOOOOOOOOOOOOOOOOOOOOOOOOO2");
                            //     Sleep(1000);
                            //     break;
                        }
                        break;
                    }
                }
                fflush(stdout);

                break;
            case '2':
                system("cls");
                atualizarScore(passado, &tamanhoArq);
                imprimirTresMaioresTempoP1(passado, tamanhoArq);
                imprimirTresMaioresTempoP2(passado, tamanhoArq);
                imprimirTresMaioresTempoP3(passado, tamanhoArq);
                Sleep(5000);
                break;
            default:
                printf("Saindo...");
                break;
            }

            fflush(stdout);

        }
    }
    return 0;
}