#include <stdio.h>
#include <stdlib.h>

int tab[10];
int koniec=0;

void dodaj(int a){
    if(koniec==10){
        printf("FIFO przpelnione\n");
    }else{
        tab[koniec]=a;
        koniec++;
    }
}
void usun(){
    if(koniec==0){
        printf("kolejka pusta\n");
    }else{
        printf("Usunieto: %d\n",tab[0]);
        for(int i=0;i<koniec-1;i++){
            tab[i]=tab[i+1];

        }
        koniec--;
    }
}
void wypisywanie(){
    for(int i =0;i<koniec;i++){
        printf("%d ",tab[i]);
    }
}


int main()
{
    dodaj(1);
    dodaj(23);
    wypisywanie();
    usun();
    dodaj(10);
    wypisywanie();
    usun();
    wypisywanie();


    return 0;
}
