#include <stdio.h>
#include <stdlib.h>

void mostrarLabirinto(int matriz[17][17])
{
    for (int i = 0; i < 17; i++)
    {
        for (int j = 0; j < 17; j++)
        {
            if (matriz[i][j] == 1)
            {
                printf(" _ ");
            } else{
                printf("   ");
            }
        }
        printf("\n");
    }
}






int main(void)
{
    int matriz[17][17] =     {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                             {1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                             {1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                             {1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
                             {1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1},
                             {1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1}
                             {1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1}
                             {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1}};
    
    mostrarLabirinto(matriz);
    printf("vamo pa la plaia!");
}