#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char Nome[50];
    int Tempo1;
    int Tempo2;
    int Tempo3;

} Jogador;

int main()
{
    Jogador jogador;
    FILE *arquivo;

    char linha[100];
    int igual = 0;
    long posicaoInicial;

    // Voltar para o início do arquivo
    

    arquivo = fopen("Ranking.txt", "a"); // Modo leitura e escrita

    printf("Digite o nome: ");
    scanf("%s", jogador.Nome);
  

    // Adicione uma mensagem apropriada para receber o tempo
    printf("Digite o tempo: ");
    scanf(" %d", &jogador.Tempo1);
    printf("Digite o tempo: ");
    scanf(" %d", &jogador.Tempo2);
    printf("Digite o tempo: ");
    scanf(" %d", &jogador.Tempo3);
    
    // fprintf(arquivo, "%s %i\n", jogador.Nome, jogador.Tempo1);

    int tempo1 = 0, tempo2 = 0, tempo3 = 0;
    // Comparar com nomes existentes antes de escrever
    arquivo = fopen("Ranking.txt", "r");
    fseek(arquivo, 0, SEEK_SET);
    while (fscanf(arquivo, "%s %d %d %d", linha, &tempo1, &tempo2, &tempo3) == 4)
    {
       
        if (strcmp(jogador.Nome, linha) == 0)
        {

            printf("\nNome encontrado: %s\n", linha);
            printf("\nTempo: %i\n", tempo3);
            igual = 1;

            arquivo = fopen("Ranking.txt", "a");
            posicaoInicial = ftell(arquivo);

            // Reescrever a linha com tempos modificados
            if (jogador.Tempo1 < tempo1)
            {
                tempo1 = jogador.Tempo1;
            }
            if (jogador.Tempo2 < tempo2)
            {
                tempo2 = jogador.Tempo2;
            }

            
            fseek(arquivo, posicaoInicial, SEEK_SET);
            fprintf(arquivo, "%s %d %d %d\n", jogador.Nome, tempo1, tempo2, tempo3);

            
            
            break;
        }
    }
    if (igual == 0)
    {
        // Se o nome não foi encontrado, escrever no arquivo
        arquivo = fopen("Ranking.txt", "a");
        printf("%d", jogador.Tempo1);
        fprintf(arquivo, "%s %d %d %d\n", jogador.Nome, jogador.Tempo1, jogador.Tempo2, jogador.Tempo3);
    }

    fclose(arquivo);

    return 0;
}



// #include <stdio.h>
// #include <stdlib.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct
// {
//     char Nome[50];
//     int Tempo1;
//     int Tempo2;
//     int Tempo3;

// } Jogador;

// typedef struct
// {
//     char NomeP[50];
//     int TempoP1;
//     int TempoP2;
//     int TempoP3;

// } Score;

// int main()
// {
//     Score passado;
//     Jogador jogador;
//     FILE *arquivo;

//     char linha[100];
//     int igual = 0;
//     long posicaoInicial;
//     int tempo1 = 0;
//     int tempo2 = 0;
//     int tempo3 = 0;
//     char nome[20];

//     // Voltar para o início do arquivo
    

//     arquivo = fopen("Ranking.txt", "a"); // Modo leitura e escrita

//     printf("Digite o nome: ");
//     scanf("%s", jogador.Nome);
  

//     // Adicione uma mensagem apropriada para receber o tempo
//     printf("Digite o tempo: ");
//     scanf(" %d", &jogador.Tempo1);
//     printf("Digite o tempo: ");
//     scanf(" %d", &jogador.Tempo2);
//     printf("Digite o tempo: ");
//     scanf(" %d", &jogador.Tempo3);
    
//     fprintf(arquivo, "%s %d %d %d\n", jogador.Nome, jogador.Tempo1, jogador.Tempo2, jogador.Tempo3);
//     fclose(arquivo);
    
    
//     arquivo = fopen("Ranking.txt", "r");

//     int posicao = 0;
    
//     while(fgets(linha,sizeof(linha),arquivo) != NULL)
//     {
//         sscanf(linha, "%s %d %d %d", passado.NomeP, &passado[posicao].TempoP1, &passado[posicao].TempoP2, &passado[posicao].TempoP3);

//         posicao++;
//     }

//     for(int i = 0; i < posicao; i++)
//     {
//         printf("%d", passado[i].TempopP2);    
//     }
   
    
//     // Comparar com nomes existentes antes de escrever
//     arquivo = fopen("Ranking.txt", "r");
    
    
    

//     fclose(arquivo);

//     return 0;
// }



// int main()
// {
//     Score passado[50];
//     Jogador jogador;
//     FILE *arquivo;

//     char linha[100];
//     int igual = 0;
//     long posicaoInicial;
//     int tempo1 = 0;
//     int tempo2 = 0;
//     int tempo3 = 0;
//     char nome[20];

//     // Voltar para o início do arquivo
    

//     arquivo = fopen("Ranking.txt", "a"); // Modo leitura e escrita

//     printf("Digite o nome: ");
//     scanf("%s", jogador.Nome);
  

//     // Adicione uma mensagem apropriada para receber o tempo
//     printf("Digite o tempo: ");
//     scanf(" %d", &jogador.Tempo1);
//     printf("Digite o tempo: ");
//     scanf(" %d", &jogador.Tempo2);
//     printf("Digite o tempo: ");
//     scanf(" %d", &jogador.Tempo3);
    
//     fprintf(arquivo, "%s %d %d %d\n", jogador.Nome, jogador.Tempo1, jogador.Tempo2, jogador.Tempo3);
//     fclose(arquivo);
    
    
//     arquivo = fopen("Ranking.txt", "r");

//     int posicao = 0;
    
//     while(fgets(linha,sizeof(linha),arquivo) != NULL)
//     {
//         sscanf(linha, "%s %d %d %d", passado->NomeP, &passado[posicao].TempoP1, &passado[posicao].TempoP2, &passado[posicao].TempoP3);

//         posicao++;
//     }

//     for(int i = 0; i < posicao; i++)
//     {
//         printf("\n%d", passado[i].NomeP);    
//     }
   
    
//     // Comparar com nomes existentes antes de escrever
//     arquivo = fopen("Ranking.txt", "r");
    
    
    

//     fclose(arquivo);

//     return 0;
// }
