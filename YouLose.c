#include<stdio.h>
void maze(){
    int fontA = 219;
    
    printf("  %c%c%c%c%c%c  %c%c   %c%c  %c%c%c%c%c%c%c    %c%c%c   %c%c%c       %c%c   %c%c   %c%c   %c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c\n", fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA);
    printf("    %c%c    %c%c   %c%c  %c%c        %c%c%c%c%c %c%c%c%c%c   %c%c %c%c       %c%c  %c%c    \n", fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA);
    printf("    %c%c    %c%c%c%c%c%c%c  %c%c%c%c%c%c    %c%c  %c%c    %c%c     %c%c %c%c %c%c %c%c%c%c%c%c%c%c%c%c    %c%c%c%c   %c%c%c%c%c%c%c%c \n", fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA);
    printf("    %c%c    %c%c   %c%c  %c%c        %c%c      %c%c   %c%c   %c%c%c%c%c%c   %c%c    \n" , fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA);
    printf("    %c%c    %c%c   %c%c  %c%c%c%c%c%c%c%c  %c%c    %c%c   %c%c %c%c   %c%c  %c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c\n", fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA, fontA);

    printf("  %c%c%c%c%c  %c   %c  %c%c%c%c%c    %c   %c   %c    %c%c%c%c%c  %c%c%c%c%c\n");
    printf("    T    H   H  E        MM MM  A A       Z  E    \n");
    printf("    T    HHHHH  EEEE     M M M AAAAA    ZZ   EEEE \n");
    printf("    T    H   H  E        M   M A   A   Z     E    \n");
    printf("    T    H   H  EEEEE    M   M A   A  ZZZZZ  EEEEE\n");

}
int main()
{
    maze();
}