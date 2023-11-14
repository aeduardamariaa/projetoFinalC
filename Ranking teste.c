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

typedef struct
{
    char NomeP[50];
    int TempoP1;
    int TempoP2;
    int TempoP3;

} Score;

int main()
{
    Score passado[50];
    Jogador jogador;
    FILE *arquivo;

    char linha[100];
    int igual = 0;
    long posicaoInicial;
    int tempo1 = 0;
    int tempo2 = 0;
    int tempo3 = 0;
    char nome[20];

    arquivo = fopen("Ranking.txt", "r"); 

    printf("Digite o nome: ");
    scanf("%s", jogador.Nome);
    printf("Digite o tempo: ");
    scanf(" %d", &jogador.Tempo1);
    printf("Digite o tempo: ");
    scanf(" %d", &jogador.Tempo2);
    printf("Digite o tempo: ");
    scanf(" %d", &jogador.Tempo3);
    
    int tamanho = 0;
    
    //Pega todas da informações do arquivo e e armazena na struck Score de com o tamanho da variavel "tamanho"
    while(fgets(linha,sizeof(linha),arquivo) != NULL)
    {
        sscanf(linha, "%s %d %d %d", passado[tamanho].NomeP, &passado[tamanho].TempoP1, &passado[tamanho].TempoP2, &passado[tamanho].TempoP3);
        tamanho++;
    }
    fclose(arquivo);


    // Verifica se tem outro nome igual
    for(int i = 0; i < tamanho; i++)
    {   
        printf("\n%s", passado[i].NomeP);
        for(int j = 0; j < strlen(jogador.Nome); j++)
        {
            if (passado[i].NomeP[j] == jogador.Nome[j])
            {   
                
                printf("%s = ",jogador.Nome[j]);
                igual++;
            } 
        }
    }

    arquivo = fopen("Ranking.txt", "a");
    if (igual < strlen(jogador.Nome))
    {
        //Se o "igual" não tiver o tamanho do nome inserido pelo jogador, ele adiciona no arquivo
        fprintf(arquivo, "%s %d %d %d\n", jogador.Nome, jogador.Tempo1, jogador.Tempo2, jogador.Tempo3);
    } 
    else
    {
        printf("\nJa tem um jogador com esse nome.%i", igual);
    }
    fclose(arquivo);
   
    
    return 0;
}
