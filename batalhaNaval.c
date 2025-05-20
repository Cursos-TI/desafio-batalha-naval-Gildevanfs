#include <stdio.h>

int main(){
    int tabuleiro[10][10] = {0};

    tabuleiro[2][4]=3;
    tabuleiro[2][5]=3;
    tabuleiro[2][6]=3;

    tabuleiro[5][7]=3;
    tabuleiro[6][7]=3; 
    tabuleiro[7][7]=3;

    for (int i = 0; i < 10; i++){ for (int j = 0; j < 10; j++)
    {
        printf("%d\t",tabuleiro[i][j]);
    }
    
        printf("\n");
    }
    return 0;
}