#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int licznik1[26]={0};
    int licznik2[26]={0};
    char tekst1[200];
    char tekst2[200];
    gets(tekst1);
    gets(tekst2);
    int a=1;
    for(int i=0;tekst1[i]!='\0';i++){
            char znak=tolower(tekst1[i]);
        if(znak>='a'&&znak<='z'){
            licznik1[znak-'a']++;
        }
    }
    for(int i=0;tekst2[i]!='\0';i++){
            char znak=tolower(tekst2[i]);
        if(znak>='a'&&znak<='z'){
            licznik2[znak-'a']++;
        }
    }
    for(int i=0;i<26;i++){
        if(licznik1[i]!=licznik2[i]){
            a=0;
            break;
        }
    }
    if(a==1) printf("slowa sa swoimi anagramami");
    else printf("slowa nie sa anagramami");

    return 0;
}
