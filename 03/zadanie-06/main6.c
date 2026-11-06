#include <stdio.h>
#include <stdlib.h>

double srednia(int suma){
    return (double)suma/5;
}

int main()
{
    int tab[5];
    int a;
    int suma=0;
    for(int i=0;i<5;i++){
        scanf("%d",&a);
        tab[i]=a;
    }
    for(int i=0;i<5;i++){
        suma+=tab[i];
    }
    for(int i=0;i<5;i++){
        if(tab[i]>srednia(suma)){
            printf("%d ", tab[i]);
        }
    }

    return 0;
}
