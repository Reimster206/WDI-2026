#include <stdio.h>
#include <stdlib.h>

int suma_cyfr(int n){
    if(n==0){
        return 0;
    }
    return n%10+suma_cyfr(n/10);
}

int main()
{
    printf("%d",suma_cyfr(507));
    return 0;
}
