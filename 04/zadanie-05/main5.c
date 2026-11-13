#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tekst[200];
    gets(tekst);
    char znak;
    int liczba=0;
    int a=1;
    int minus=0;
    for(int i=0;tekst[i]!='\0';i++){
        znak=tekst[i];
        if(i==0&&znak=='-'){
            minus=1;
        }else if(znak>='0'&&znak<='9'){
            liczba=liczba*10+(znak-48);
        }else{
            a=0;
            break;
        }
    }
    if(a==1 && tekst[0]!='\n'&& tekst[0]!='\0'){
        if(minus==1){
            liczba=-liczba;
        }
        printf("liczba ze stringa: %d",liczba);
    }else{
        printf("podany ciag znakow nie jest liczba calkowita");
    }
    return 0;
}
