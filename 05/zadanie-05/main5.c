#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[4][4];
    printf("podawaj kolejne liczby do tablicy \n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&tab[i][j]);
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ",tab[i][j]);
        }
        printf("\n");
    }
    return 0;
}
