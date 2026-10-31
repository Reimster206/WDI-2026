#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a=0;
     int suma=0;
     int najmnijesza, najwieksza;
     int i = 0;
     do{
        scanf("%d",&a);
        if(i==0){
            najmnijesza=a;
            najwieksza=a;
        }

        suma+=a;
        i++;
        if(a>najwieksza){
            najwieksza=a;
        };
        if(a<najmnijesza){
            najmnijesza=a;
        };
     }while(a%2!=0);
     float srednia;
     srednia=(float)suma/i;
     printf("najwieksza: %d  najmnijesza: %d  suma: %d  srednia: %.2f",najwieksza,najmnijesza,suma,srednia);
    return 0;
}
