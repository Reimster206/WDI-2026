#include <stdio.h>
#include <stdlib.h>

void quick_sort(int tab[], int lewy,int prawy){
    if(prawy<=lewy) return;
    int i=lewy-1;
    int j = prawy +1;
    int srodek=tab[(prawy+lewy)/2];
    int temp;
    while(1){
        while(srodek>tab[++i]);
        while(srodek<tab[--j]);
        if(i<=j){
            temp=tab[i];
            tab[i]=tab[j];
            tab[j]=temp;
        }else{
            break;
        }
    }
    if(j>lewy){
        quick_sort(tab,lewy,j);
    }
    if(i<prawy){
        quick_sort(tab,i,prawy);
    }

}

int main()
{
    int tab[10];
    printf("Podaj 10 elementow tablicy: ");
    for(int i=0;i<10;i++){
        scanf("%d",&tab[i]);
    }
    quick_sort(tab,0,9);
    printf("\n Posortowana tablica: ");
    for(int i=0;i<10;i++){
        printf("%d ",tab[i]);
    }
}
