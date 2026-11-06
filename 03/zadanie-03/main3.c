#include <stdio.h>
#include <stdlib.h>

int ceiling(double a){
    int x=(int)a;
    if(a>x){
        return x+1;
    }
    return x;
}

int floor(double a){
    int x=(int)a;
    if(a<x){
        return x-1;
    }
    return x;
}
int round(double a){
    if(a>=0){
        return (int)(a+0.5);
    }
    return (int)(a-0.5);
}

int main()
{
    double a=3.4;
    printf("%d\n",ceiling(a));
    printf("%d\n",floor(a));
    printf("%d",round(a));
    return 0;
}
