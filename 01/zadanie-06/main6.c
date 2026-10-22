#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sekundy;
    printf("Podaj ilosc sekund: ");
    scanf("%d", &sekundy);
    int godziny=sekundy/3600;
    sekundy=sekundy-(godziny*3600);
    int minuty=sekundy/60;
    sekundy=sekundy-(minuty*60);
    printf("%d h %d min %d s",godziny,minuty,sekundy);
    return 0;
}

