#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a,b;
     char znak;
     float wynik;
     printf("Podaj pierwsza liczbe: ");
     scanf("%d", &a);
     printf("Podaj druga liczbe: ");
     scanf("%d", &b);
     printf("Podaj znak (+,-,*,/,%): ");
     scanf(" %c", &znak);
    switch(znak){
case '+':
    printf("wynik: %d",a+b);
    break;
case '-':
    printf("wynik: %d", a-b);
    break;
case '*':
    printf("wynik: %d",a*b);
    break;
case '/':
    wynik=(float)a/b;
    printf("wynik: %f",wynik);
    break;
case '%':
    printf("wynik: %d",a%b);
    break;
default:
    printf("zly znak!");
    }

    return 0;
}
