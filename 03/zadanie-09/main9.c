#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int tab[]){
    int temp;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(tab[i]>tab[j]){
                temp=tab[j];
                tab[j]=tab[i];
                tab[i]=temp;
            }
        }
    }
}

int main()
{
    int tab[10];
    int a;
    for(int i=0;i<10;i++){
        scanf("%d",&a);
        tab[i]=a;
    }
    bubble_sort(tab);
    for(int i=0;i<10;i++){
        printf("%d ",tab[i]);
    }

    return 0;
}
