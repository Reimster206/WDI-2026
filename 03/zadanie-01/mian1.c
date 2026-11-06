#include <stdio.h>
#include <stdlib.h>

unsigned int ciagfibonaciego(unsigned n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return ciagfibonaciego(n-1)+ciagfibonaciego(n-2);
}

int main()
{
    printf("%d",ciagfibonaciego(10U));
    return 0;
}
