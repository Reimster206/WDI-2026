#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[4][4];
    int pom;
    printf("podawaj kolejne liczby do tablicy \n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&tab[i][j]);
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3-j; k++){
                if(tab[i][k] > tab[i][k+1]){
                    pom = tab[i][k];
                    tab[i][k] = tab[i][k+1];
                    tab[i][k+1] = pom;
                }
            }
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
