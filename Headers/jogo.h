#ifndef JOGO_H
#define JOGO_H

typedef struct
{
    int x;
    int y;
} Personagem;


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

#endif