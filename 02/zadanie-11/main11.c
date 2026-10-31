#include <stdio.h>
#include <stdlib.h>

int potegowanie(int liczba, int wykladnik){
    if(wykladnik==0){
        return 1;
    };
    return liczba*potegowanie(liczba, wykladnik-1);
};


int main()
{
    printf("%d",potegowanie(2,4));
    return 0;
}
