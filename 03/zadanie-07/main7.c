#include <stdio.h>
#include <stdlib.h>

double srednia(int tab[]){
    int suma=0;
    for(int i=0;i<10;i++){
        suma+=tab[i];
    }
    return (double)suma/10;

}
void wypisywaniewikeszej(int tab[],double srednia){
    for(int i=0;i<10;i++){
        if(tab[i]>srednia){
            printf("%d ", tab[i]);
        }
    }
}
void naj(int tab[]){
    int max=0;
    int min=tab[0];
    for(int i=0;i<10;i++){
        if(tab[i]>max){
            max=tab[i];
        }
        if(tab[i]<min){
            min=tab[i];
        }
    }
    printf("najmnijesza: %d najwieksza: %d",min,max);
}

void sumaa(int tab[]){
    int suma=0;
    for(int i=0;i<10;i++){
        if(tab[i]%2!=0){
            suma+=tab[i];
        }
    }
    printf("suma nieparzystych: %d",suma);
}

void wypisywanie(int tab[]){
    for(int i=9;i>=0;i--){
        printf("%d ",tab[i]);
    }
}

int main()
{
    int tab[10];
    int a;
    int suma=0;
    for(int i=0;i<10;i++){
        scanf("%d",&a);
        tab[i]=a;
    }

    printf("srednia: %f\n",srednia(tab));
    wypisywaniewikeszej(tab,srednia(tab));
    printf("\n");
    naj(tab);
    printf("\n");
    sumaa(tab);
    printf("\n");
    wypisywanie(tab);

    return 0;
}
