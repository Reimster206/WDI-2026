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

        }else if(znak>='A' && znak<='Z'){
            if(znak=='X'){
                ciag[i]='A';
            }
            else if(znak=='Y'){
                ciag[i]='B';
            }
            else if(znak=='Z'){
                ciag[i]='C';
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

        }else if(znak>='A' && znak<='Z'){
            if(znak=='A'){
                ciag[i]='X';
            }
            else if(znak=='B'){
                ciag[i]='Y';
            }
            else if(znak=='C'){
                ciag[i]='Z';
            }
            else{
                ciag[i]=znak-3;
            }

        }
    }
}

int main()
{
    char ciag[4]="azF";
    printf("ciag: %s\n",ciag);
    szyfrowanie(ciag);
    printf("zaszyfrowaany: %s\n",ciag);
    odszyfrowanie(ciag);
    printf("odszyfrowany: %s\n",ciag);
}
