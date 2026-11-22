#include <stdio.h>
#include <stdlib.h>

void szyfrowanie(char ciag[], int n, int klucz) {
    for(int i = 0; i < n; i++) {
        char znak = ciag[i];

        if(znak >= 'a' && znak <= 'z') {
            ciag[i] = 'a' + (znak - 'a' + klucz) % 26;
        }
        else if(znak >= 'A' && znak <= 'Z') {
            ciag[i] = 'A' + (znak - 'A' + klucz) % 26;
        }
    }
}

void odszyfrowanie(char ciag[], int n, int klucz) {
    for(int i = 0; i < n; i++) {
        char znak = ciag[i];

        if(znak >= 'a' && znak <= 'z') {
            ciag[i] = 'a' + (znak - 'a' - klucz + 26) % 26;
        }
        else if(znak >= 'A' && znak <= 'Z') {
            ciag[i] = 'A' + (znak - 'A' - klucz + 26) % 26;
        }
    }
}

int main() {
    char ciag[100];
    int wybor;
    int klucz;
    int n;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Szyfrowanie\n");
        printf("2. Deszyfrowanie\n");
        printf("3. Wyjscie\n");
        printf("Wybierz opcje: ");
        scanf("%d", &wybor);

        if(wybor == 1 || wybor == 2) {

            printf("Podaj tekst: ");
            scanf("%99s", ciag);

            printf("Podaj klucz szyfrowania: ");
            scanf("%d", &klucz);

            klucz = klucz % 26;

            n = 0;
            while(ciag[n] != '\0') {
                n++;
            }

            if(wybor == 1) {
                szyfrowanie(ciag, n, klucz);
                printf("Zaszyfrowany tekst: %s\n", ciag);
            }
            else {
                odszyfrowanie(ciag, n, klucz);
                printf("Odszyfrowany tekst: %s\n", ciag);
            }
        }
        else if(wybor != 3) {
            printf("Niepoprawna opcja!\n");
        }

    } while(wybor != 3);

    return 0;
}
