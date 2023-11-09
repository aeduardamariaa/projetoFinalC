#ifndef JOGO_H
#define JOGO_H

typedef struct
{
    int x;
    int y;
} Personagem;


int LINHA;
int COLUNA;

void mostrarLabirinto(int matriz[LINHA][COLUNA], Personagem bolinha);
int verificarParedes(int matriz[LINHA][COLUNA], Personagem bolinha, int input);
int ganhar(int matriz[LINHA][COLUNA], Personagem bolinha);
void andar(int matriz[LINHA][COLUNA], Personagem *bolinha, int input);
void jogo(int matriz[LINHA][COLUNA], Personagem bolinha);

#endif