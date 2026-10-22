#include <stdio.h>
#include <stdlib.h>

int main()
{
    char iniciaj;
    int wiek;
    printf("Podaj pierwsza litere imienia: ");
    scanf("%c",&iniciaj);
    printf("Podaj wiek: ");
    scanf("%d", &wiek);
    printf("Inicial: %c, wiek: %d",iniciaj,wiek);
}
