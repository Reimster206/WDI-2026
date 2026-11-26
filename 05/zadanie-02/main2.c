#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba;
    int i=0;
    scanf("%d",&liczba);
    char ciag[12], nowy[12];
    while(liczba>0){
        ciag[i]='0'+liczba%10;
        liczba=liczba/10;
        i++;
    };
    nowy[i]='\0';
    for(int j=0;j<i;j++){
        nowy[j]=ciag[i-1-j];
    }
    printf("%s",nowy);
    return 0;
}
