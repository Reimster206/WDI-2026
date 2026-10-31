
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Podaj numer miesiaca: ");
    scanf("%d", &a);
        switch(a){
    case 1:
    case 2:
    case 3:
        printf("I kwartal");
        break;
    case 4:
    case 5:
    case 6:
        printf("II kwartal");
        break;
    case 7:
    case 8:
    case 9:
        printf("III kwartal");
        break;
    case 10:
    case 11:
    case 12:
        printf("IV kwartal");
        break;
    default:
        printf("Podano zly numer miesiaca");
        break;
        }



    return 0;
}
