#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("POdaj dwie liczby: ");
    scanf("%d %d",&a,&b);
    if(a<b){
        printf("wieksza: %d\n",b);
        printf("mniejsza: %d\n", a);
        printf("a<b\n");
    }else if(a>b){
        printf("wieksza: %d\n",a);
        printf("mniejsza: %d\n", b);
        printf("a>b\n");
    }else{
        printf("obie liczby sa rowne\n");
        printf("a=b");
    }
}

