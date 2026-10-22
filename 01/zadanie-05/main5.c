#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[5];

    for (int i = 0; i < 5; i++) {
        printf("Podaj %d ocene: ", i + 1);
        scanf("%d", &tab[i]);
    }

    int suma = 0;

    for (int i = 0; i < 5; i++) {
        suma += tab[i];
    }

    float srednia;
    srednia = suma / 5.0;

    printf("Srednia ocen wynosi: %.2f\n", srednia);

    return 0;
}

