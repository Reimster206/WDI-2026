#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    char b[100];
    int x=0;
    int licznika=0;
    int licznikb=0;
    scanf("%99s %99s",a,b);
    for(int i=0;a[i]!='\0';i++){
        licznika++;
    }
    for(int i=0;b[i]!='\0';i++){
        licznikb++;
    }
    if(licznika==licznikb){
        for(int i=0;i<licznika;i++){
            if(a[i]==b[licznikb-1]&&a[i]>='0'&&a[i]<='9'){
                licznikb--;
            }else{
                x=1;
                break;
            }
        }
    }else{
        x=1;
    }
    if(x==0){
        printf("liczby sa lustrzane");
    }else{
        printf("liczby nie sa lustrzane");
    }
    return 0;
}
