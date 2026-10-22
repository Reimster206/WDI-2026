#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Podaj dwie liczby: ");
    scanf("%d %d",&a,&b);
    if(b!=0){
        int modulo = a%b;
        if(modulo==0){
            printf("Liczba %d jest podzielna przez %d",a,b);
        }else{
            printf("Liczba %d nie jest podzielna przez %d",a,b);
        }
    }else{
        printf("nie mozna dzielic przez zero!!!!");
    }

}

