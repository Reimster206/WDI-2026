#include <stdio.h>
#include <stdlib.h>

long long funkcja(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    if(n==3){
        return 3;
    }
    return funkcja(n-1)*funkcja(n-2)-funkcja(n-3);
}

int main()
{
    printf("%lld",funkcja(10));
    return 0;
}
