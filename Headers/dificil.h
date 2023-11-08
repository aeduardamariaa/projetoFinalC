#ifndef DIFICIL_H
#define DIFICIL_H

#define LINHA3 50
#define COLUNA3 50

typedef struct
{
    int x;
    int y;
} Personagem;

void mostrarLabirinto3(int matriz3[LINHA3][COLUNA3], Personagem bolinha);

int verificarParedes3(int matriz3[LINHA3][COLUNA3], Personagem bolinha, int input3);

int ganhar3(int matriz3[LINHA3][COLUNA3], Personagem bolinha);

void andar3(int matriz3[LINHA3][COLUNA3], Personagem *bolinha, int input3);

#endif