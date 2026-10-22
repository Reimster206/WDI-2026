#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[5];
    int nds=0;

    for (int i = 0; i < 5; i++) {
        printf("Podaj %d ocene: ", i + 1);
        scanf("%d", &tab[i]);
        if(tab[i]==1){
            nds++;
        }
    }

    int suma = 0;

    for (int i = 0; i < 5; i++) {
        suma += tab[i];
    }

    float srednia;
    srednia = suma / 5.0;

    printf("Srednia ocen wynosi: %.2f\nIlosc ocen niedostatecznych: %d", srednia,nds);

    return 0;
}
