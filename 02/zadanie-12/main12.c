#include <stdio.h>
#include <stdlib.h>

int ciagf(int n){
    if(n==0){
        return 0;
    }else if(n==1 || n==2){
        return 1;
    };
    return ciagf(n-2)+ciagf(n-1);
}


int main()
{

    return 0;
}
