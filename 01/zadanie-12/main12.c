#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int suma=0;
    for(int i=0;i<n;i++){
        suma+=i;
        printf("%d",i);
    }

    printf("Suma: %d",suma);

    return 0;
}
