#include <stdio.h>
void ganhou(){
    int fontA = 219, fontB = 176;
  
    printf("    %c%c      %c%c%c%c    %c%c%c%c%c%c                          \n",fontA,fontA,fontA,fontA,fontA,fontA,        fontA,fontA,fontA,fontA,fontA,fontA);
    printf("    %c%c%c%c    %c%c%c%c%c%c%c%c  %c%c%c%c%c%c                          \n",fontA,fontA,fontB,fontB,fontA,fontA,fontA,fontA,fontB,fontB        ,fontA,fontA,fontB,fontB,fontA,fontA,fontA,fontA);
    printf("    %c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c                  \n",fontA,fontA,fontB,fontB,fontA,fontA,fontA,fontA,fontA,fontA,fontB,fontB           ,fontA,fontA,fontB,fontB,fontA,fontA,fontA,fontA,fontB,fontB);
    printf("      %c%c%c%c%c%c%c%c%c%c  %c%c%c%c  %c%c%c%c%c%c                \n",fontA,fontA,fontA,fontA,fontA,fontA,fontA,fontA,fontB,fontB      ,fontA,fontA,fontB,fontB,fontA,fontA,fontA,fontA,fontB,fontB);
    printf("        %c%c%c%c%c%c%c%c  %c%c%c%c  %c%c%c%c%c%c                \n",fontA,fontA,fontA,fontA,fontB,fontB,fontB,fontB            ,fontA,fontA,fontB,fontB,fontA,fontA,fontA,fontA,fontB,fontB);
    printf("        %c%c%c%c%c%c    %c%c%c%C  %c%c%c%c%c%c                     \n",fontA,fontA,fontA,fontA,fontB,fontB            ,fontA,fontA,fontB,fontB,fontA,fontA,fontA,fontA,fontB,fontB);
    printf("        %c%c%c%c%c%c      %c%c%c%c%c%c%c%c%c%c                             \n",fontA,fontA,fontA,fontA,fontB,fontB          ,fontA,fontA,fontA,fontA,fontA,fontA,fontB,fontB,fontB,fontB);
    printf("          %c%c%c%c        %c%c%c%c%c%c                             \n",fontB,fontB,fontB,fontB,          fontB,fontB,fontB,fontB,fontB,fontB);

}

int main(){
    ganhou();

}
