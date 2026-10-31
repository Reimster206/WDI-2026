#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n;
     int suma=0;
     printf("Podaj liczbe z zakresu 1-100: ");
     scanf("%d",&n);
     if(n<1 || n>100){
        printf("Podana liczba jest poza zakresem\n");
     }else{
        for(int i=1;i<=n;i++){
            suma+=i*i;
        };
        printf("Suma: %d",suma);
     };


    return 0;
}
