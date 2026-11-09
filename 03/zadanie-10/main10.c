#include <stdio.h>
#include <stdlib.h>

int pom[10];

void scalanie(int tab[],int lewy,int prawy, int srodek){
    int i=lewy;
    int j=srodek+1;
    for(int i=lewy;i<=prawy;i++){
        pom[i]=tab[i];
    }
    for(int k=lewy;k<=prawy;k++){
        if(i<=srodek){
            if(j<=prawy){
                if(pom[j]<pom[i]){
                    tab[k]=pom[j++];
                }else{
                    tab[k]=pom[i++];
                }
            }else{
                tab[k]=pom[i++];
            }
        }else{
            tab[k]=pom[j++];
        }
    }
}

void merge_sort(int tab[],int lewy,int prawy){
    if(prawy<=lewy){
        return;
    }
    int srodek=(prawy+lewy)/2;
    merge_sort(tab,lewy,srodek);
    merge_sort(tab,srodek+1,prawy);
    scalanie(tab,lewy,prawy,srodek);

}

int main()
{
    int tab[10];
    int a;
    for(int i=0;i<10;i++){
        scanf("%d",&a);
        tab[i]=a;
    }
    merge_sort(tab,0,9);
    for(int i=0;i<10;i++){
        printf("%d ",tab[i]);
    }

    return 0;
}
