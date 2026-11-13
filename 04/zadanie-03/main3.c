#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int licznik[26]={0};
    char tekst[200];
    gets(tekst);
    for(int i=0;tekst[i]!='\0';i++){
            char znak=tolower(tekst[i]);
        if(znak>='a'&&znak<='z'){
            licznik[znak-'a']++;
        }
    }
    for(int i=0;i<26;i++){
        if(licznik[i]>0){
            printf("%c - %d\n",'a'+i,licznik[i]);
        }
    }

    return 0;
}
