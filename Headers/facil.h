#ifndef FACIL_H
#define FACIL_H

#define LINHA1 10
#define COLUNA1 10

typedef struct
{
    int x;
    int y;
} Personagem;

void mostrarLabirinto1(int matriz1[LINHA1][COLUNA1], Personagem bolinha);

int verificarParedes1(int matriz1[LINHA1][COLUNA1], Personagem bolinha, int input1);

int ganhar1(int matriz1[LINHA1][COLUNA1], Personagem bolinha);

void andar1(int matriz1[LINHA1][COLUNA1], Personagem *bolinha, int input1);

#endif