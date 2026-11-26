#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tab[10][10][10];

    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                tab[i][j][k] = rand() % 10;
            }
        }
    }

    for(int i = 0; i < 10; i++){

        printf("\nWarstwa %d:\n", i + 1);

        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                printf("| %d ", tab[i][j][k]);
            }

            printf("|\n");
        }
    }

    return 0;
}
