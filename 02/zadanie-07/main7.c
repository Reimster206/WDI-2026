
#include <stdio.h>
#include <stdlib.h>

int main()
{
    const unsigned granica = 20U;
    unsigned wynik=0U;
    for(int i=1;i<=granica;i++){
        if(i%3==0){
            wynik+=i;
        };
    };
    printf("wynik: %u", wynik);

    return 0;
}
