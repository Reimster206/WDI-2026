#include <stdio.h>
#include <stdlib.h>

void poczkon(int tab[]){
    for(int i=0;i<10;i++){
        printf("%d ",tab[i]);
    }
    printf("\n");
    int i=0;
    while(i<10){
        printf("%d ",tab[i]);
        i++;
    }
    printf("\n");
}
void konpocz(int tab[]){
    int i=9;
    do{
        printf("%d ",tab[i]);
        i--;
    }while(i>=0);
}

int main()
{
    int tab[10]={0,8,12,4,129,6,11,90,65,81};
    poczkon(tab);
    konpocz(tab);
    return 0;
}
