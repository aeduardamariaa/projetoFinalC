#ifndef DIFICIL_H
#define DIFICIL_H

#define LINHA 50
#define COLUNA 50

typedef struct
{
    int x;
    int y;
} Personagem;

void mostrarLabirinto(int matriz[LINHA][COLUNA], Personagem bolinha);

int verificarParedes(int matriz[LINHA][COLUNA], Personagem bolinha, int input);

int ganhar(int matriz[LINHA][COLUNA], Personagem bolinha);

void andar(int matriz[LINHA][COLUNA], Personagem *bolinha, int input);

#endif