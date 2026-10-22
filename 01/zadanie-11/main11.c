#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Podaj liczbe: ");
    scanf("%d",&a);
    int modulo = a%2;
    if(modulo==0 && a>0){
        printf("Liczba jest jednoczesnie parzysta i dodatnia");
    }else{
        printf("Liczba nie jest jednoczesnie parzysta i dodatnia");
    }

    return 0;
}
