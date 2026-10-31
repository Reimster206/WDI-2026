
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    char znak;
    int wybor;
    float wynik;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe: ");
    scanf("%d", &b);
    printf("Wybierz dzialanie (+, -, *, /, %): ");
    scanf(" %c", &znak);

    while(1) {

        printf("\n");

        switch(znak) {
            case '+':
                printf("Wynik: %d + %d = %d\n", a, b, a+b);
                break;

            case '-':
                printf("Wynik: %d - %d = %d\n", a, b, a-b);
                break;

            case '*':
                printf("Wynik: %d * %d = %d\n", a, b, a*b);
                break;

            case '/':
                if(b == 0) {
                    printf("Nie mozna dzielic przez zero!\n");
                }
                else {
                    wynik = (float)a/b;
                    printf("Wynik: %d / %d = %.2f\n", a, b, wynik);
                }
                break;

            case '%':
                if(b == 0) {
                    printf("Nie mozna dzielic przez zero!\n");
                }
                else {
                    printf("Wynik: %d %% %d = %d\n", a, b, a%b);
                }
                break;
        }

        printf("\n--- MENU ---\n");
        printf("1. Zmien pierwsza liczbe\n");
        printf("2. Zmien druga liczbe\n");
        printf("3. Wybierz dzialanie (+, -, *, /, %%)\n");
        printf("4. Zakoncz program\n");
        printf("Twoj wybor: ");

        scanf("%d", &wybor);

        switch(wybor) {

            case 1:
                printf("Podaj nowa pierwsza liczbe: ");
                scanf("%d", &a);
                break;

            case 2:
                printf("Podaj nowa druga liczbe: ");
                scanf("%d", &b);
                break;

            case 3:
                printf("Podaj dzialanie: ");
                scanf(" %c", &znak);
                break;

            case 4:
                printf("Koniec programu.\n");
                return 0;

            default:
                printf("Nie ma takiej opcji!\n");
        }
    }

    return 0;
}
