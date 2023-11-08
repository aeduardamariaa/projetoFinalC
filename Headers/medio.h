#ifndef MEDIO_H
#define MEDIO_H

#define LINHA2 17
#define COLUNA2 17

typedef struct
{
    int x;
    int y;
} Personagem;

void mostrarLabirinto2(int matriz2[LINHA2][COLUNA2], Personagem bolinha);
int verificarParedes2(int matriz2[LINHA2][COLUNA2], Personagem bolinha, int input2);
int ganhar2(int matriz2[LINHA2][COLUNA2], Personagem bolinha);
void andar2(int matriz2[LINHA2][COLUNA2], Personagem *bolinha, int input2);

#endif