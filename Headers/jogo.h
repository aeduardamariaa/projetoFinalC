#ifndef JOGO_H
#define JOGO_H

typedef struct
{
    int x;
    int y;
} Personagem;

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

int LINHA;
int COLUNA;

void ganhou();
void mostrarLabirinto(int matriz[LINHA][COLUNA], Personagem bolinha);
int verificarParedes(int matriz[LINHA][COLUNA], Personagem bolinha, int input);
int ganhar(int matriz[LINHA][COLUNA], Personagem bolinha);
void andar(int matriz[LINHA][COLUNA], Personagem *bolinha, int input);
struct tm tempoAtual();
float seconds(struct tm *data_hora_atual);
void jogo(int matriz[LINHA][COLUNA], Personagem bolinha);
// void jogo(int matriz[LINHA][COLUNA], Personagem bolinha, Score passado[], int tamanho, Jogador jogador);
void atualizarScore(Score passado[], int *tamanho);
void adicionarJogadorTempo(Jogador jogador, Score passado[],int tamanho);
void imprimirTresMaioresTempoP1(Score passado[], int tamanho);
void imprimirTresMaioresTempoP2(Score passado[], int tamanho);
void imprimirTresMaioresTempoP3(Score passado[], int tamanho);
// void alterarTempo(Score *passado, Jogador jogador, int i ,int tempo)

#endif