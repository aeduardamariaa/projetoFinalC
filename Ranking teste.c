#include <stdio.h>
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

void atualizarScore(Score passado[], int *tamanho) {
    FILE *arquivo;
    *tamanho = 0;
    char linha[100];
    
    arquivo = fopen("Ranking.txt", "r"); 

    while(fgets(linha,sizeof(linha),arquivo) != NULL)
    {
        sscanf(linha, "%s %d %d %d", passado[*tamanho].NomeP, &passado[*tamanho].TempoP1, &passado[*tamanho].TempoP2, &passado[*tamanho].TempoP3);
        (*tamanho)++;
    }
    fclose(arquivo);
}

void adicionarJogadorTempo(char *inputNome, int novotempo1, int novotempo2, int novotempo3, Score passado[],int tamanho)
{
    Jogador jogador;
    FILE *arquivo;

    int igual = 0, jaTem = 0, tempoalterado = 0;
    
    strcpy(jogador.Nome, inputNome);
    
    jogador.Tempo1 = novotempo1;
    jogador.Tempo2 = novotempo2;
    jogador.Tempo3 = novotempo3;
    
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
                
                if(passado[i].TempoP1 != novotempo1)
                {
                    passado[i].TempoP1 = novotempo1;
                    tempoalterado = 1;
                }
                if(passado[i].TempoP2 != novotempo2)
                {   
                    passado[i].TempoP2 = novotempo2;
                    tempoalterado = 1;
                }
                if(passado[i].TempoP3 != novotempo3)
                {   
                    passado[i].TempoP3 = novotempo3;
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

void imprimirTresMaioresTempoP1(Score passado[], int tamanho) {
    int tresMaiores[3] = {0};
    char nomes[3][50];

    for (int i = 0; i < tamanho; i++) {
        if (passado[i].TempoP1 > tresMaiores[0]) {
            strcpy(nomes[2], nomes[1]);
            strcpy(nomes[1], nomes[0]);
            strcpy(nomes[0], passado[i].NomeP);
            tresMaiores[2] = tresMaiores[1];
            tresMaiores[1] = tresMaiores[0];
            tresMaiores[0] = passado[i].TempoP1;
        } else if (passado[i].TempoP1 > tresMaiores[1]) {
            strcpy(nomes[2], nomes[1]);
            strcpy(nomes[1], passado[i].NomeP);
            tresMaiores[2] = tresMaiores[1];
            tresMaiores[1] = passado[i].TempoP1;
        } else if (passado[i].TempoP1 > tresMaiores[2]) {
            strcpy(nomes[2], passado[i].NomeP);
            tresMaiores[2] = passado[i].TempoP1;
        }
    }

    printf("Os três maiores valores de TempoP1 são: %d (%s), %d (%s), %d (%s)\n", tresMaiores[0], nomes[0], tresMaiores[1], nomes[1], tresMaiores[2], nomes[2]);
}


void imprimirTresMaioresTempoP2(Score passado[], int tamanho) {
    int tresMaiores[3] = {0};
    char nomes[3][50];

    for (int i = 0; i < tamanho; i++) {
        if (passado[i].TempoP2 > tresMaiores[0]) {
            strcpy(nomes[2], nomes[1]);
            strcpy(nomes[1], nomes[0]);
            strcpy(nomes[0], passado[i].NomeP);
            tresMaiores[2] = tresMaiores[1];
            tresMaiores[1] = tresMaiores[0];
            tresMaiores[0] = passado[i].TempoP2;
        } else if (passado[i].TempoP2 > tresMaiores[1]) {
            strcpy(nomes[2], nomes[1]);
            strcpy(nomes[1], passado[i].NomeP);
            tresMaiores[2] = tresMaiores[1];
            tresMaiores[1] = passado[i].TempoP2;
        } else if (passado[i].TempoP2 > tresMaiores[2]) {
            strcpy(nomes[2], passado[i].NomeP);
            tresMaiores[2] = passado[i].TempoP2;
        }
    }

    printf("Os três maiores valores de TempoP2 são: %d (%s), %d (%s), %d (%s)\n", tresMaiores[0], nomes[0], tresMaiores[1], nomes[1], tresMaiores[2], nomes[2]);
}



void imprimirTresMaioresTempoP3(Score passado[], int tamanho) {
    int tresMaiores[3] = {0};
    char nomes[3][50];

    for (int i = 0; i < tamanho; i++) {
        if (passado[i].TempoP3 > tresMaiores[0]) {
            strcpy(nomes[2], nomes[1]);
            strcpy(nomes[1], nomes[0]);
            strcpy(nomes[0], passado[i].NomeP);
            tresMaiores[2] = tresMaiores[1];
            tresMaiores[1] = tresMaiores[0];
            tresMaiores[0] = passado[i].TempoP3;
        } else if (passado[i].TempoP3 > tresMaiores[1]) {
            strcpy(nomes[2], nomes[1]);
            strcpy(nomes[1], passado[i].NomeP);
            tresMaiores[2] = tresMaiores[1];
            tresMaiores[1] = passado[i].TempoP3;
        } else if (passado[i].TempoP3 > tresMaiores[2]) {
            strcpy(nomes[2], passado[i].NomeP);
            tresMaiores[2] = passado[i].TempoP3;
        }
    }

    printf("Os três maiores valores de TempoP3 são: %d (%s), %d (%s), %d (%s)\n", tresMaiores[0], nomes[0], tresMaiores[1], nomes[1], tresMaiores[2], nomes[2]);
}

int main()
{   
    FILE *arquivo;
    int tamanho = 0;
    Score passado[50];
    char nomeJogador[20] = "Clebeer";
    
    atualizarScore(passado, &tamanho);
    printf("Tamanho do arquivo: %i\n",tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("Nome: %s, TempoP1: %d, TempoP2: %d, TempoP3: %d\n", passado[i].NomeP, passado[i].TempoP1, passado[i].TempoP2, passado[i].TempoP3);
    }    
    
    adicionarJogadorTempo(nomeJogador, 5000, 5000, 101, passado, tamanho);

    imprimirTresMaioresTempoP1(passado, tamanho);

    imprimirTresMaioresTempoP2(passado, tamanho);
    imprimirTresMaioresTempoP3(passado, tamanho);
    
}
