#include <stdio.h>
#include <stdlib.h>

void szyfrowanie(char ciag[] ){
    for(int i=0;ciag[i]!='\0';i++){
        char znak = ciag[i];
        if(znak>='a' && znak<='z'){
            if(znak=='x'){
                ciag[i]='a';
            }
            else if(znak=='y'){
                ciag[i]='b';
            }
            else if(znak=='z'){
                ciag[i]='c';
            }
            else{
                ciag[i]=znak+3;
            }

        }
    }

}

void odszyfrowanie(char ciag[]){
    for(int i=0;ciag[i]!='\0';i++){
        char znak = ciag[i];
        if(znak>='a' && znak<='z'){
            if(znak=='a'){
                ciag[i]='x';
            }
            else if(znak=='b'){
                ciag[i]='y';
            }
            else if(znak=='c'){
                ciag[i]='z';
            }
            else{
                ciag[i]=znak-3;
            }

        }
    }
}

int main()
{
    char ciag[4]="azf";
    printf("ciag: %s\n",ciag);
    szyfrowanie(ciag);
    printf("zaszyfrowaany: %s\n",ciag);
    odszyfrowanie(ciag);
    printf("odszyfrowany: %s\n",ciag);
}
